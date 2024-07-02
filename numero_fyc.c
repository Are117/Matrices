#include <stdio.h>



int main(){

int matriz[3][3]={{1,2,3}, //definición de matriz
                  {5,6,7},
                  {9, 10, 11}};



int elementos=sizeof(matriz);//le asigna a la variable elementos el tamaño de la matriz
int filas=elementos/12;//como el tamaño de la matriz es 36 y cada elemento vale 4 entonces dividimos para 12 para obtener 3
int columnas=elementos/12;///hacemos lo mismo con columnas

printf("La matriz tiene una dimension de %dx%d\n", filas, columnas);
return 0;
}