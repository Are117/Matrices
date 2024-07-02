#include <stdio.h>



int main(){

int matriz_resultante[3][3];

int matriz[3][3]= {{12,23,44},
                  {25,13,15},
                  {16, 23, 27}};

int matriz2[3][3]={{1,2,3},
                  {5,6,7},
                  {9, 10, 11}};

        printf("La matriz resultante es\n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    matriz_resultante[i][j]=matriz[i][j]-matriz2[i][j];
    printf("%d ", matriz_resultante[i][j]);
    }
    printf("\n");
}


return 0;
}