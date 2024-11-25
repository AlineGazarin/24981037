Controle de temperatura

int main() {
    float temperatura;

    printf("Controle de Temperatura do Laboratório\n");

    do {
        printf("\nDigite a temperatura atual (em °C): ");
        scanf("%f", &temperatura);

        if (temperatura < 20.0 || temperatura > 25.0) {
            printf("ALERTA: Temperatura fora da faixa segura (20°C - 25°C)!\n");
        } else {
            printf("Temperatura dentro da faixa segura.\n");
        }
      // Continua monitorando a cada segundo (simulado com entrada do usuário)
    } while (temperatura < 20 || temperatura > 25);

    printf("\nTemperatura estável.\n");
    return 0;
}
