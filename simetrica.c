#include <stdio.h> //inclusión de librería estandar
#include <stdlib.h>
#include <time.h>

 int main(){ //declaración de función principal

int i, j;
int matriz[3][3];
srand(time(0));//función para generar números aleatorios tomando en cuenta el segundo en que ejecutamos el algoritmo

//declaro las posiciones en donde se generará un número aleatorio
matriz[0][0]=rand()%10+1;
matriz[1][0]=rand()%10+1;
matriz[2][0]=rand()%10+1;
matriz[2][1]=rand()%10+1;


//para que una matriz sea simétrica su transpuesta debe ser igual a la original, por eso los valores en la diagonal principal son los mismos
//en las otras posiciones tambien se repiten los mismos números para hacer que la matriz sea simetrica
//en total se necesitan 4 números, que son repetidos en algunos puntos de la matriz
matriz[1][1]=matriz[0][0];
matriz[2][2]=matriz[0][0];
matriz[0][1]=matriz[1][0];
matriz[0][2]=matriz[2][0];
matriz[1][2]=matriz[2][1];


for(i=0; i<3; i++){  //recorre filas
    for(j=0; j<3; j++){//recorre columnas
        printf("%d ", matriz[i][j]);//imprime la matriz con los valores generados
    }
    printf("\n");
}



    return 0;
 }