// o código abaixo cria uma função que altera o valor da variável dado
// acessando o seu espaço de memória
// o '&dado' indica o local de memória que aquela variável está
// o '*a' faz com que o programa acesse a memória
#include <stdio.h>

void funcao (int* a){
    *a = *a +1;
    printf("a = %d\n", *a);
}

int main(){
    int dado = 0;
    funcao(&dado);
    funcao(&dado);
    return 0;
}