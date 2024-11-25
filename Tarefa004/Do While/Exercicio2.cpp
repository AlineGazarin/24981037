#include <stdio.h>

int main() {
    float distancia;      
    char continuar;        

    printf("Leitura de Sensores de Distância\n");
    printf("O programa encerra automaticamente se a distância for menor que 10 cm.\n");

    do {
        printf("\nIniciando leitura do sensor...\n");

        // Simulando a leitura do sensor (pode ser substituído por leitura real)
        printf("Digite a distância medida (em cm): ");
        scanf("%f", &distancia);

        // Exibindo a distância medida
        printf("Distância medida: %.2f cm\n", distancia);

        // Verifica se a distância é menor que 10 cm
        if (distancia < 10) {
            printf("Distância crítica detectada! Encerrando o programa.\n");
            break;  // Sai do loop imediatamente
        }

        // Pergunta ao usuário se deseja continuar
        printf("Deseja continuar as leituras? (S/N): ");
        scanf(" %c", &continuar);  // O espaço antes de %c é para ignorar newline do buffer

    } while (continuar == 'S' || continuar == 's');  // Continua enquanto o usuário quiser

    printf("\nPrograma encerrado.\n");
    return 0;
}
