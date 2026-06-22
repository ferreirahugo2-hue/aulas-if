#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float nota, soma = 0;
    int i, total = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o nome do aluno (ou x para sair): ");
        scanf("%s", nome);

      
        if (strcmp(nome, "x") == 0) {
            break;
        }

        printf("Digite a nota: ");
        scanf("%f", &nota);

        soma += nota;
        total++;
    }

    if (total > 0) {
        float media = soma / total;
        printf("\nMedia da turma: %.2f\n", media);
    } else {
        printf("\nNenhum aluno foi cadastrado.\n");
    }

    return 0;
}
