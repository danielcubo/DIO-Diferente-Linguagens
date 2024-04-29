import java.util.Scanner;

public class CalculoSalarioLiquido {
    public static void main(String[] args) throws Exception {
        Scanner terminal = new Scanner(System.in);

        System.out.print("Digite o seu salario: ");
        float salarioBase = terminal.nextFloat();

        System.out.print("Digite os beneficios: ");
        float beneficios = terminal.nextFloat();

        terminal.close();

        float descontoINSS = descontarINSS(salarioBase);
        float salarioLiquido = (salarioBase - descontoINSS) + beneficios;

        System.out.println("***** Folha de pagamento *****");
        System.out.println("Salario Base:    \t"+String.format("%.2f", salarioBase));
        System.out.println("Beneficios:      \t"+String.format("%.2f", beneficios));
        System.out.println("Descontos:       \t"+String.format("%.2f", descontoINSS));
        System.out.println("Salario liquido: \t"+String.format("%.2f", salarioLiquido)+"\n");
    }

    static float descontarINSS(float paramSalarioBase) {

        float descontoINSS; // Instituto Nacional de Seguro Social
        // Faixa 1 (ate 1.412,00)           -> 7.5%
        // Faixa 2 (1.412,01 ate 2.666,68)  -> 9%
        // Faixa 3 (2.666,69 ate 4.000,03)  -> 12%
        // Faixa 4 (4.000,04 ate 7.786,02*) -> 14%
        // * teto do INSS

        if(paramSalarioBase <= 1412) {
            // Faixa 1 -> 7.5%
            descontoINSS = paramSalarioBase * 0.075f;            
        } else if(paramSalarioBase > 1412 && paramSalarioBase <= 2666.68) {
            // Faixa 2 -> 9%
            descontoINSS = paramSalarioBase * 0.09f;
        } else if(paramSalarioBase > 2666.68 && paramSalarioBase <= 4000.03) {
            // Faixa 3 -> 12%
            descontoINSS = paramSalarioBase * 0.12f;
        } else {
            // Faixa 4 -> 14%
            descontoINSS = paramSalarioBase * 0.14f;
        }

        return descontoINSS;
    }
}