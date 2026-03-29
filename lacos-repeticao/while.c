#include <stdio.h>
// while com condição de parada clara
int main()
{
    int contador = 1;

    while (contador <= 3) {
        printf("Contador: %d\n", contador);
        printf("Contador: %d\n", contador);
        contador = contador + 1; // Ou contador++;
    }

    printf("Fim do laço.\n");

    // Um loop infinito, essencial para o firmware de um microcontrolador
    while (1) {
    // Este bloco de código será executado para sempre,
    // pois a condição '1' (que é um valor verdadeiro) nunca muda.
   
    // Ler dados de um sensor
    // Processar os dados
    // Enviar informações para a nuvem
    // Controlar um atuador
    // ...
}
float umidade = 0.0;

// O laço vai continuar enquanto a umidade for menor que 70
while (umidade < 70.0) {
    // Simula a leitura de um sensor
    umidade = lerSensorUmidade();

    // Verifica uma condição de emergência
    if (umidade > 85.0) {
        printf("UMIDADE CRÍTICA! Saindo do laço...\n");
        break; // Sai do loop imediatamente
    }

    printf("Umidade atual: %.2f\n", umidade);
    // Pequena pausa para nova leitura do sensor
    esperar(1000);
}
printf("Fim da coleta de dados.\n");

    int contador = 0;

    while (contador < 10) {
        contador = contador + 1;

        // Verifica se o número é par
        if(contador % 2 == 0) {
            continue;
        }

        printf("Contador: %d\n", contador);
    }

return 0;

}