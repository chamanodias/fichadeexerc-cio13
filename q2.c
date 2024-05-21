#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int tamanho;
    int i;

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

    printf("Você digitou os números:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
