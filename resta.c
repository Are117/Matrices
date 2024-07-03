#include <stdio.h>



int main(){//declaración de función princial

int matriz_resultante[3][3];//declaración de arreglo en donde se almacenará la matriz resultante

int matriz[3][3]= {{12,23,44},//declaración de la primera matriz
                  {25,13,15},
                  {16, 23, 27}};

int matriz2[3][3]={{1,2,3},//declaración de la segunda matriz
                  {5,6,7},
                  {9, 10, 11}};

        printf("La matriz resultante es\n");//imprime mensaje
for(int i=0; i<3; i++){//recorre filas
    for(int j=0; j<3; j++){//recorre columnas
    matriz_resultante[i][j]=matriz[i][j]-matriz2[i][j];//resta el valor de matriz y matriz 2 y le asigna este valor a la matriz resultante
    printf("%d ", matriz_resultante[i][j]);//imprime el resultado de la resta
    }
    printf("\n");//salto de página para separar filas
}


return 0;
}
