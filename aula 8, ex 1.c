#include <stdio.h>

void lanca(int n) {
    if (n < 0) {
        printf("Erro: número negativo!\n");
    } else {
        printf("Número recebido: %d\n", n);
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    lanca(numero);

    return 0;
}