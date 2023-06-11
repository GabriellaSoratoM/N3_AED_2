//Gabriella Sorato Mendonca
//11/06/2023
//8136626

#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() {
    int numeros[11];
    int novoNumero;
    int i, j;

    printf("Digite os 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    bubbleSort(numeros, 10);

    printf("\nDigite um novo número: ");
    scanf("%d", &novoNumero);

        if (novoNumero < numeros[i]) {
            numeros[i+1] = numeros[i];
        } else {
            break;
        }
    }
    numeros[i+1] = novoNumero;


    printf("\nVetor atualizado:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
