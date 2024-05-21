#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int i;

    array = (int *)malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Você digitou os números:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
