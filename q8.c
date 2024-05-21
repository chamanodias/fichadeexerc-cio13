#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanho = 0;
    int numero;

    printf("Digite números inteiros (negativo para parar):\n");

    while (1) {
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }

        tamanho++;
        vetor = (int *)realloc(vetor, tamanho * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao realocar memória\n");
            return 1;
        }

        vetor[tamanho - 1] = numero;
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
