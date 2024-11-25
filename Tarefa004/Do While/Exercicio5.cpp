#include <stdio.h>
#include <string.h>

int main() {
    int x = 3, y = 3;  // Posição inicial do robô (centro do grid 5x5)
    char comando[10];  // Para armazenar o comando do usuário

    printf("Simulação de Navegação Autônoma - Grid 5x5\n");
    printf("Comandos: cima, baixo, esquerda, direita. Digite 'parar' para encerrar.\n");

    do {
        printf("\nPosição atual do robô: (%d, %d)\n", x, y);
        printf("Digite o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            if (y < 5) y++;
            else printf("Movimento inválido! O robô está no limite superior do grid.\n");
        } else if (strcmp(comando, "baixo") == 0) {
            if (y > 1) y--;
            else printf("Movimento inválido! O robô está no limite inferior do grid.\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 1) x--;
            else printf("Movimento inválido! O robô está no limite esquerdo do grid.\n");
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 5) x++;
            else printf("Movimento inválido! O robô está no limite direito do grid.\n");
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando inválido! Tente novamente.\n");
        }

    } while (strcmp(comando, "parar") != 0);  // Continua até o comando ser 'parar'

    printf("\nPrograma encerrado. Posição final do robô: (%d, %d)\n", x, y);
    return 0;
}
