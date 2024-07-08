#include <stdio.h>



int main(){

int matriz[3][3]={{1,2,3}, //definición de matriz
                  {5,6,7},
                  {9, 10, 11}};

int tamaño=sizeof(matriz)/sizeof(matriz[0]);
int filas=tamaño;
int columnas=tamaño;

printf("La matriz tiene una dimension de %dx%d\n", filas, columnas);
return 0;
}
