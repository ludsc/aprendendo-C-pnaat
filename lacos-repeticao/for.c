
#include<stdio.h> 
// aplicando for em uma array
int main()
{
    float temperatura[5] = {23.3f, 22.8f, 22.2f, 21.9f, 21.6f};
   
    for(int i = 0; i < 5; i++) {
        printf("temperatura[%d] = %.1f\n", i, temperatura[i]);
    }
    // aplicando em uma matriz
    float temperatura2[2][3] = {
        {23.3f, 22.8f, 22.2f},
        {23.5f, 22.9f, 22.4f}
    };
   
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("temperatura[%d][%d] = %.1f\n", i, j, temperatura2[i][j]);
        }
    }

    return 0;
}