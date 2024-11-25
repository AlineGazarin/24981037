#include <stdio.h>

int main() {
    int passos, total_de_passos = 0;
    const int meta_diaria = 10000; 

    printf("Monitor de Passos - Meta Diária: 10.000 passos\n");

    while (total_de_passos < meta_diaria) {
        printf("\nInforme a quantidade de passos dados: ");
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Erro! quantidade de passos não pode ser negativa.\n");
        }

        total_de_passos += passos;

        printf("Progresso atual: %d passos\n", total_de_passos);

        if (total_de_passos >= meta_diaria) {
            printf("Parabéns! Você atingiu ou ultrapassou a meta de 10.000 passos!\n");
        } else {
            printf("Falta apenas %d passos para atingir a meta.\n", meta_diaria - total_de_passos);
        }
    }

    return 0;
}
