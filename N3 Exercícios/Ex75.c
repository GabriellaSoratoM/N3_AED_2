//Gabriella Sorato Mendonca
//11/06/2023
//8136626

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        printf("(%d, ", i);

        for (j = 1; j <= 10; j++) {
            printf("%d ", j);
        }

        printf(")\n");
    }

    return 0;
}
