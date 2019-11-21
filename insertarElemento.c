#include <stdio.h>

int main()
{
    int matriz[10][10] = {(0,0)}, pos, s=1;
    
    
    printf("En que posicion eliges (del 0 al 9)? ");
    scanf("%d", &pos);
    printf("\n");

    //Insertar un nuevo elemento en la posición correcta
    
    for(int i = 0; i <10 && s==1; i++){
        if(matriz[i][pos] == 0){
            matriz[i][pos] = 1;
            s = 0;
        }
    }


    /**
    *   Imprimir matriz
    *   archivo del repositorio: imprimirMatriz.c
    **/

    for(int i = 9; i >= 0; i--){
        for(int j = 0; j < 10; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
