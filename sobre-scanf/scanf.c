// o código abaixo utiliza da abordagem de capturar mais de uma variável por linha
// deixando o código mais legível

#include <stdio.h>

int main() {
    int idade;
    float altura;

    printf("Digite sua idade e, em seguida, sua altura em metros: ");
    scanf("%d %f", &idade, &altura);

    printf("Voce tem %d anos e %.2f m de altura.\n", idade, altura);

    return 0;
}