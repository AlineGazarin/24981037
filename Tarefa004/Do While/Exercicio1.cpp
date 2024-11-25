#include <stdio.h>
#include <string.h>

int main() {

    int x = 5, y = 5; 
    char comando[10];  

    printf("Controle do Robô em um espaço de 10x10 metros\n");
    printf("Comandos: esquerda, direita, tras, frente. Digite 'sair' para encerrar.\n");

    do {
        printf("\nPosição atual do robô: (%d, %d)\n", x, y);
        printf("Digite o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            if (y < 10) y++;  
            else printf("Movimento inválido! O robô está no limite superior.\n");
        } else if (strcmp(comando, "tras") == 0) {
            if (y > 1) y--;
            else printf("Movimento inválido! O robô está no limite inferior.\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 1) x--;
            else printf("Movimento inválido! O robô está no limite esquerdo.\n");
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 10) x++;
            else printf("Movimento inválido! O robô está no limite direito.\n");
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando inválido! Tente novamente.\n");
        }

    } while (strcmp(comando, "sair") != 0);

    printf("\nPrograma encerrado. Posição final do robô: (%d, %d)\n", x, y);
    return 0;
}

