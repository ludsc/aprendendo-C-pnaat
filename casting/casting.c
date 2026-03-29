// programa apenas para praticar o processo de casting
// processo esse que corresponde a 'modificar' momentaneamente como os valores de uma varíavel são lidos
// com a finalidade de felxibilizar seus usos
#include <stdio.h>

int main(void){
    int leitura_adc = 0;
    float temperatura = 0;

    printf(" Digite a leitura do ADC: ");
    scanf("%d", &leitura_adc);
    temperatura = ((float) leitura_adc * 5) / 1023*100;
    printf("Temperatura: %.2f", temperatura);
    return 0;
}