// esse arquivo é apenas de exemplo, não deve ser compilado.
//função sem entrada e sem retorno
#include <stdio.h>

void pisca_led() {
    printf("LED de status ligado.\n");
}

int main() {
    printf("Iniciando processo.\n");
    pisca_led(); 
    printf("Processo concluído.\n");
    pisca_led(); 
    return 0;
}

// funcao sem entrada e com retorno
float calcular_media() {
    float leitura1 = 25.5;
    float leitura2 = 26.0;
    float leitura3 = 25.0;
    float leitura4 = 25.5;
    float leitura5 = 26.5;

    float media = (leitura1 + leitura2 + leitura3 + leitura4 + leitura5) / 5;
    return media; 
}

int main() {
    float temperatura_media;
    temperatura_media = calcular_media(); 
    printf("A temperatura média é: %.2f\n", temperatura_media);
    return 0;
}

//funcao com entrada e sem retorno
void mover_motor(int velocidade, char direcao) {
    printf("Movendo motor a %d RPM, na direcao %c.\n", velocidade, direcao);
}

int main() {
    mover_motor(150, 'F'); // Move o motor a 150 RPM para Frente
    mover_motor(50, 'T');  // Move o motor a 50 RPM para Trás
    return 0;
}

// funcao com entrada e com retorno

float celsius_para_fahrenheit(float temp_celsius) {
    float temp_fahrenheit = (temp_celsius * 9.0/5.0) + 32.0;
    return temp_fahrenheit;
}

int main() {
    float temp_sensor = 25.0;
    float temp_convertida = celsius_para_fahrenheit(temp_sensor);
    printf("Temperatura em Fahrenheit: %.2f\n", temp_convertida);
    return 0;
}