#include "stdio.h"
#include "stdlib.h"

#define SIZE 32

int	comprimento_string(char	str[]) {
    int size = 0;
    for(int i = 0; str[i] != 0; i++) {
        size++;
    }

    return size;
}

int main() {
    char nome[SIZE];
    int size = 0;
    int vogais = 0;

    printf("Insira um nome:\n");
    scanf("%s", nome);

    size = comprimento_string(nome);

    for(int i = size - 1; i >= 0; i--) {
        printf("%c", nome[i]);

        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u') {
            vogais++;
        }
    }

    printf("\nTotal vogais: %d\n", vogais);
}