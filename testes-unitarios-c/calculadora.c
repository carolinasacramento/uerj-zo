#include <stdio.h>
#include "calculadora.h" 
int main() {
    double numero1, numero2, resultado;
    char operacao;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    switch (operacao) {
        case '+':
            resultado = soma(numero1, numero2);
            break;
        case '-':
            resultado = subtracao(numero1, numero2);
            break;
        case '*':
            resultado = multiplicacao(numero1, numero2);
            break;
        case '/':
            if (numero2 != 0.0) {
                resultado = divisao(numero1, numero2);
            } else {
                printf("Erro: Divisao por zero.\n");
                return 1; // Encerra o programa com erro
            }
            break;
        default:
            printf("Erro: Operacao inválida.\n");
            return 1; // Encerra o programa com erro
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0; // Sucesso
}
