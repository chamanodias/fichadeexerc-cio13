#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int tamanho;
    int i;
    int pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    array = (int *)malloc(tamanho * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite %d números inteiros:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < tamanho; i++) {
        if (array[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    free(array);

    return 0;
}
