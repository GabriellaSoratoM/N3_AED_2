//Gabriella Sorato Mendonca
//11/06/2023
//8136626


#include <stdio.h>

int main() {
    int quantidade, i;
    double numero, maior = 0, soma = 0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("Digite o número %d: ", i);
        scanf("%lf", &numero);

        soma += numero;

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número digitado foi: %.2lf\n", maior);
    printf("A média dos números digitados é: %.2lf\n", soma / quantidade);

    return 0;
}
