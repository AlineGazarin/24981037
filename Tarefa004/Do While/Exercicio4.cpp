#include <stdio.h>

int main() {
    float bateria;  // Para armazenar o nível da bateria

    printf("Sistema de Monitoramento de Bateria\n");
    printf("O programa verifica o nível da bateria e avisa quando estiver baixo.\n");

    do {
        // Solicitar o nível da bateria ao usuário (simulação)
        printf("\nDigite o nível atual da bateria (em %%): ");
        scanf("%f", &bateria);

        // Verificar se a bateria está baixa
        if (bateria <= 0) {
            printf("Erro: A bateria não pode estar zerada ou negativa! Verifique o sistema.\n");
        } else if (bateria > 100) {
            printf("Erro: O nível de bateria não pode ultrapassar 100%%! Verifique o sistema.\n");
        } else if (bateria <= 20) {
            printf("ALERTA: Bateria baixa (%.2f%%). Conecte o robô à fonte de energia!\n", bateria);
        } else {
            printf("Bateria suficiente (%.2f%%). Robô funcionando normalmente.\n", bateria);
        }

    } while (bateria <= 20 || bateria <= 0 || bateria > 100); // Continua até a bateria estar acima de 20%

    printf("\nMonitoramento encerrado. Bateria está em %.2f%%.\n", bateria);
    return 0;
}
