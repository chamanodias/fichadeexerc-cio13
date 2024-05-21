#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int tamanho = 1500;
    int contadorZeros = 0;

    vetor = (int *)calloc(tamanho, sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            contadorZeros++;
        }
    }
    printf("O vetor contém %d valores inicializados com zero.\n", contadorZeros);

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    printf("Os 10 primeiros elementos do vetor são:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("Os 10 últimos elementos do vetor são:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}
