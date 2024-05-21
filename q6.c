#include <stdio.h>
#include <stdlib.h>

void inicializarMemoria(int *memoria, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        memoria[i] = 0;
    }
}

int main() {
    int *memoria;
    int tamanhoMemoria;
    int posicao, valor;
    char opcao;

    printf("Digite o tamanho da memória (em bytes, múltiplo do tamanho de int): ");
    scanf("%d", &tamanhoMemoria);

    if (tamanhoMemoria % sizeof(int) != 0) {
        printf("O tamanho da memória deve ser múltiplo do tamanho de int (%zu bytes).\n", sizeof(int));
        return 1;
    }

    int numPosicoes = tamanhoMemoria / sizeof(int);

    memoria = (int *)malloc(numPosicoes * sizeof(int));
    if (memoria == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    inicializarMemoria(memoria, numPosicoes);

    do {
        printf("\nEscolha uma opção (i para inserir, c para consultar, s para sair): ");
        scanf(" %c", &opcao);

        if (opcao == 'i') {
            printf("Digite a posição (0 a %d): ", numPosicoes - 1);
            scanf("%d", &posicao);
            if (posicao < 0 || posicao >= numPosicoes) {
                printf("Posição inválida!\n");
                continue;
            }
            printf("Digite o valor a ser inserido na posição %d: ", posicao);
            scanf("%d", &valor);
            memoria[posicao] = valor;
            printf("Valor %d inserido na posição %d.\n", valor, posicao);
        } else if (opcao == 'c') {
            printf("Digite a posição (0 a %d): ", numPosicoes - 1);
            scanf("%d", &posicao);
            if (posicao < 0 || posicao >= numPosicoes) {
                printf("Posição inválida!\n");
                continue;
            }
            printf("O valor contido na posição %d é: %d\n", posicao, memoria[posicao]);
        }
    } while (opcao != 's');

    printf("Saindo...\n");
    free(memoria);

    return 0;
}
