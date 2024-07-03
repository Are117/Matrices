#include <stdio.h>

int main() {
    int matriz1[3][3]={{5,3,2},
                      {-1,2,3},
                      {3,0,1}};
    printf("Matriz inicial:\n");//imprimirmos la matriz inicial para que sea visible al usuario al momento de ejecutar el algoritmo.
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }


    double matriz[3][6] = {//declaración de una matriz 3x6, pues incluye la matriz original unida a la matriz de identidad
        {5, 3, 2, 1, 0, 0},
        {-1, 2, 3, 0, 1, 0},
        {3, 0, 1, 0, 0, 1}};


//A continuación se aplicara una serie de ciclos repetitivos para ir aplicando las fórmulas matemáticas necesarias para calcular la matriz inversa
    for (int i = 0; i < 3; i++) {//Este for recorre las filas de la matriz al momento de convertir la diagonal principal en 1
        double factor1 = matriz[i][i];//declaración de la variable factor1 que corresponde a los valores de la diagonal princial
            for (int j = 0; j < 6; j++) {//recorre columnas de la matriz al momento de convertir la diagonal principal en 1
            matriz[i][j] /= factor1;//divide cada columna de la primera fila entre el factor1
            }

        for (int k = 0; k < 3; k++) {//se recorreran las filas de la matriz al momento de convertir el resto de filas de la columna correspondiente en 0
            if (k != i) { //se establece una condición para que no se ejecute en la fila que ya fue dividida entre factor 1
                double factor2 = matriz[k][i]; //declaración de la variable factor2 que corresponde al valor ubicado en la misma columna pero en diferentes filas
                    for (int j = 0; j < 6; j++) {//recorre las columnas de la matriz al momento de convertir el resto de filas de la columna correspondiente en 0
                    matriz[k][j] -= factor2 * matriz[i][j]; //hace la operación necesaria para convertir los valores en 0
                    }
            }
        }
    }

    
    double matriz_inversa[3][3];//declaración del arreglo en donde se almacenará la matriz inversa
    for (int i = 0; i < 3; i++) {//recorre filas
        for (int j = 0; j < 3; j++) { //recorre columnas
            matriz_inversa[i][j] = matriz[i][j + 3]; //como la inversa esta ubicada a partir de la tercera columna, imprime las filas normalmente pero le suma 3 a las columnas
        }
    }

    printf("\nMatriz inversa:\n");//imprime la matriz inversa
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriz_inversa[i][j]);
        }
        printf("\n");
    }

    return 0;
}