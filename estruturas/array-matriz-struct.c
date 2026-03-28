//exemplo de uma implementação apenas para representar dados de um carro
#include <stdio.h>

main(){
    // a estrutura abaixo armazena diversos detalhes de uma roda
    typedef struct {
        float velocidade;
        char sentido;
        float corrente;
        float tensao;
        int pwm;
    }roda_t;
    // abaixo usamos a struct acima e a iniciamos.
    roda_t roda[2][2] = {0}; // usar p '{0}' permite um inicio que o lixo de memória não seja usado
    
    return 0;
}