#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int N, X;
    int i, count = 0;

    printf("Digite o tamanho do vetor (N): ");
    scanf("%d", &N);

    vetor = (int *)malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite %d números inteiros:\n", N);
    for (i = 0; i < N; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro X: ");
    scanf("%d", &X);

    printf("Múltiplos de %d no vetor:\n", X);
    for (i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", X);
    } else {
        printf("\nTotal de múltiplos de %d: %d\n", X, count);
    }

    free(vetor);

    return 0;
}
