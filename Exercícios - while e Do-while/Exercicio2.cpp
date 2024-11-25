Sistema de monitoramento de Combustível

#include <stdio.h>

int main() {
    float nivel_de_combustivel;

    printf("Monitoramento de Combustível do Carro Elétrico\n");

    do {
        printf("\nDigite o nível de combustível atual (em %%): ");
        scanf("%f", &nivel_de_combustivel);

        if (nivel_de_combustivel < 0 || nivel_de_combustivel > 100) {
            printf("ALERTA! O nível de combustível deve estar entre 0 e 100.\n");
        }

        if (nivel_de_combustivel < 15.0) {
            printf("ALERTA: Nível de combustível crítico (%.2f%%)!\n", nivel_de_combustivel);
            printf("Recarregue o veículo.\n");
        } else if (nivel_de_combustivel < 100.0) {
            printf("Nível de combustível em %.2f%% \n", nivel_de_combustivel);
        } else {
            printf("Combustível completo (100%%). Monitoramento encerrado.\n");
        }

    } while (nivel_de_combustivel < 100.0);

    return 0;
}
