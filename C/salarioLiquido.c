#include <stdio.h>

float descontarINSS(float paramSalarioBase) {
    float descontoINSS;

    if(paramSalarioBase <= 1412) {
        descontoINSS = paramSalarioBase * 0.075;
    } else if(paramSalarioBase > 1412 && paramSalarioBase <= 2666.68) {
        descontoINSS = paramSalarioBase * 0.09;
    } else if(paramSalarioBase > 2666.68 && paramSalarioBase <= 4000.03) {
        descontoINSS = paramSalarioBase * 0.12;
    } else {
        descontoINSS = paramSalarioBase * 0.14;
    }
    
    return descontoINSS;
}

int main() {
    // Variaveis
    float salarioBase, beneficios, descontoINSS, salarioLiquido;

    // Entradas
    printf("Digite o seu salario: ");
    scanf("%f", &salarioBase);

    printf("Digite os beneficios: ");
    scanf("%f", &beneficios);

    descontoINSS = descontarINSS(salarioBase);
    salarioLiquido = (salarioBase - descontoINSS) + beneficios;

    printf("***** Folha de pagamento *****\n");
    printf("Salario Base:    \t%.2f\n", salarioBase);
    printf("Beneficios:      \t%.2f\n", salarioBase);
    printf("Descontos:       \t%.2f\n", descontoINSS);
    printf("Salario liquido: \t%.2f\n\n", salarioLiquido);

    return 0;
}

