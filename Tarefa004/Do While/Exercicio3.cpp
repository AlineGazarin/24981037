#include <stdio.h>

int main() {
    int opcao;  // Para armazenar a escolha do usuário

    printf("Controle de Atuação do Robô\n");
    printf("Selecione uma ação para o robô executar ou encerre o programa.\n");

    do {
        // Exibindo o menu de opções
        printf("\n--- MENU DE AÇÕES ---\n");
        printf("1. Ligar a lâmpada\n");
        printf("2. Tocar um som\n");
        printf("3. Mover o braço\n");
        printf("4. Encerrar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Executando a ação correspondente
        switch (opcao) {
            case 1:
                printf("Robô ligou a lâmpada.\n");
                break;
            case 2:
                printf("Robô tocou um som.\n");
                break;
            case 3:
                printf("Robô moveu o braço.\n");
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 4);  // O programa continua até o usuário escolher a opção 4

    printf("\nPrograma encerrado.\n");
    return 0;
}
