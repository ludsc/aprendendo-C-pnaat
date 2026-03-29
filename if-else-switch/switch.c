#include <stdio.h>
// exemplo de implementação usando apenas if, else if e else
int main()
{
    int comando = 0;
   
    printf("Digite o comando: ");
    scanf("%d", &comando);
   
    if (comando == 0) {
        printf("Comando recebido: Iniciar sistema.\n");
    } else if (comando == 1) {
        printf("Comando recebido: Parar sistema.\n");
    } else if (comando == 2) {
        printf("Comando recebido: Resetar sensores.\n");
    } else {
        printf("Comando inválido.\n");
    }
// exemplo usando switch, deixa o código mais legível
switch (comando) {
    case 0:
        printf("Comando recebido: Iniciar sistema.\n");
        break;
    case 1:
        printf("Comando recebido: Parar sistema.\n");
        break;
    case 2:
        printf("Comando recebido: Resetar sensores.\n");
        break;
    default: 
        printf("Comando inválido.\n");
        break;
}
   
    return 0;
}