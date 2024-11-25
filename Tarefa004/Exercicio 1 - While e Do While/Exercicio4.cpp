#include <stdio.h>
#include <stdlib.h>

int main()
{
   int deposito;
    printf("Sistema de Depósito Mínimo de R$ 500,00\n");

    while (deposito <500) {
        printf("\nAtenção! O valor precisa ser superior a R$ 500,00");
        printf("\nDigite o valor inicial de deposito : ");
        scanf("%d", &deposito);

        if (deposito < 0) {
            printf("Erro: o valor do deposito não pode ser negativa.\n");
        continue;}
        if (deposito < 500) {
            printf("Erro: o valor do deposito não pode ser inferior a R$ 500,00!\n");
        } else {
            printf("Deposito de  %d realizado com sucesso.\n", deposito);
        }
    }

    return 0;
}
