#include <stdio.h>

int main() {
    int numero = 10;
    int vetor[10];

    for (int i = 0; i < numero; i++) {
        scanf("%d", &vetor[i]);
    }

    while (numero > 1) {
        for (int i = 0; i < numero; i++) {
            printf("%d", vetor[i]);

            if (i < numero - 1) {
                printf(" ");
            }
        }
        printf("\n");

        for (int i = 0; i < numero - 1; i++) {
            vetor[i] += vetor[i + 1];
        }
        numero = numero - 1;
    }

    printf("%d\n", vetor[0]);

    return 0;
}