#include <stdio.h> //inclusión de librería estandar
 int main(){ //declaración de función principal

int matriz[3][3]={{2,2,3}, //definición de matriz
                  {5,6,8},
                  {10, 10, 11}};

printf("Los numeros impares de la matriz son:\n");

for(int i=0; i<3; i++){//uso del for para recorrer filas
    for(int j=0; j<3; j++){//uso del for para recorrer columnas
        if(matriz[i][j]%2!=0){ //condiciono para que solo imprima el número en caso de que no sea divisible para 2 de forma exacta
            printf("%d ", matriz[i][j]);
        }else{
             printf("  "); //caso contrario imprime 2 espacios en blanco
        }
    }
    printf("\n"); //imprime salto de línea cada que termina una fila
}
    return 0;
}
