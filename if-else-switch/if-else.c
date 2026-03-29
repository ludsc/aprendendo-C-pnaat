#include <stdio.h>

int main()
{
    int distancia = 0;
    printf("Digite a distância: ");
    scanf ("%d", &distancia);

    if (distancia < 5){
        printf("Parando...\n");       
    }
    else if (distancia < 10){
        printf("Reduzindo a velocidade...\n");
    }     
    else {
        printf("Aumentando a velocidade...\n");
    }
    return 0;
}