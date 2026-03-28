// %d → números inteiros (int)
// %f → números reais (float)
// %c → caracteres (char)
// %s → strings (sequência de caracteres)
//
#include <stdio.h>

int main() {
    float temperatura = 26.5;
    float umidade = 82.1545;
    int idade = 20;

    printf("Temperatura: %.2f °C \nUmidade: %.2f\n Idade: %d\n", temperatura, umidade, idade); // o '\n' pula linha

    return 0;
}