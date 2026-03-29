#include <stdio.h>

int main()
{
    int valor = 0;

    do {
        printf("\nOla, bem vindo ao nosso programa.\n");
        printf("Com ele voce aprende a usar o do while.\n");
        printf("Você entendeu?\n\n");
        printf("Se quiser repetir essa mensagem digite 1:\n");
        scanf("%d", &valor);

    } while(valor == 1);

    return 0;
}