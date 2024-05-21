#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocarString(int tamanho) {
    char *str = (char *)malloc(tamanho * sizeof(char));
    if (str == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }
    return str;
}

void removerVogais(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (*src != 'a' && *src != 'e' && *src != 'i' && *src != 'o' && *src != 'u' &&
            *src != 'A' && *src != 'E' && *src != 'I' && *src != 'O' && *src != 'U') {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    int tamanho;
    char *string;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    string = alocarString(tamanho + 1); 

    printf("Digite a string: ");
    getchar(); 
    fgets(string, tamanho + 1, stdin);

    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }

    removerVogais(string);

    printf("String sem vogais: %s\n", string);

    free(string);

    return 0;
}
