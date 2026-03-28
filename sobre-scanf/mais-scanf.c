// apenas praticando o uso do scanf
#include <stdio.h>

int main(){
    int parcela_1 = 0;
    int parcela_2 = 0;
    int soma = 0;

    printf("Digite um valor: ");
    scanf("%d", &parcela_1);
    printf("Digite outro valor: ");
    scanf("%d", &parcela_2);

    soma = parcela_1 + parcela_2;
    printf("Soma: %d\n", soma);
}