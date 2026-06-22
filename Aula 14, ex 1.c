#include <stdio.h>

int main() {
    float temperaturas[7];
    float *p = temperaturas; // ponteiro para o vetor
    float soma = 0;

    // Receber temperaturas
    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", p + i); // usando ponteiro
    }

    // Calcular soma
    for (int i = 0; i < 7; i++) {
        soma += *(p + i); // acessando via ponteiro
    }

    float media = soma / 7;

    // Mostrar resultado
    printf("\nMedia das temperaturas: %.2f\n", media);

    return 0;
}
