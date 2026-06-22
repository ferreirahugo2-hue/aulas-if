#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    
    for (int i = 0; nome[i] != '\0'; i++) {
        nome[i] = tolower(nome[i]);
    }

    int tamanho = strlen(nome);

    printf("Quantidade de letras: %d\n", tamanho);

    
    printf("Nome invertido: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}
