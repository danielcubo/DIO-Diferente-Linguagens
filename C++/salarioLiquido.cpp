#include <iostream>

using namespace std;

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
    cout << "Digite seu salario: ";
    cin >> salarioBase;

    cout << "Digite os beneficios: ";
    cin >> beneficios;

    descontoINSS = descontarINSS(salarioBase);
    salarioLiquido = (salarioBase - descontoINSS) + beneficios;

    // cout << "Salario Base: " << salarioBase << endl;
    // cout << "Salario Liquido: " << salarioLiquido << endl;

    printf("***** Folha de pagamento *****\n");
    printf("Salario Base:    \t%.2f\n", salarioBase);
    printf("Beneficios:      \t%.2f\n", salarioBase);
    printf("Descontos:       \t%.2f\n", descontoINSS);
    printf("Salario liquido: \t%.2f\n\n", salarioLiquido);

    return 0;
}