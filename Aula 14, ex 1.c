#include <stdio.h>

int main() {
    float temperaturas[7];
    float *p = temperaturas;
    float soma = 0;

    
    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", p + i); 
    }

    
    for (int i = 0; i < 7; i++) {
        soma += *(p + i); 
    }

    float media = soma / 7;

    
    printf("\nMedia das temperaturas: %.2f\n", media);

    return 0;
}
