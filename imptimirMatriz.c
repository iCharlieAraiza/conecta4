#include <stdio.h>

int main()
{
    //Se incializa una matriz 10 x 10
    int matriz[10][10] = {(0,0)};
    
    //Se imprime la matriz de abajo (9) hacia arriba (0)
    for(int i = 9; i >= 0; i--){
        for(int j = 0; j < 10; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
