#include <stdio.h>

int main() {
    int dia[7];
    int i;
    int contador = 0;
    float porcentagem;

    for (i = 0; i < 7; i++) {
        printf("Choveu no dia %d? (1=sim, 0=nao): ", i + 1);
        scanf("%d", &dia[i]);

        if (dia[i] == 1) {
            contador++;
        }
    }

    porcentagem = (contador / 7.0) * 100;

    printf("Resultado: %.0f%% de dias chuvosos.\n", porcentagem);

    return 0;
}