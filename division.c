#include <stdio.h>

double (*calcular_inversa(double matriz[3][6]))[3] {//declaración de la función que devuelve como resultado una matriz 3x3, siendo esta la matriz inversa
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

static double matriz_inversa[3][3]; // Matriz que almacena la inversa extraida de la matriz de 3x6
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_inversa[i][j] = matriz[i][j + 3];
        }
    }
    return matriz_inversa;
}

void multiplicacion(int matriz[3][3], double matriz2[3][3], double matriz_resultante[3][3]) {
    int i, j, k;
    // Inicializar la matriz resultante con ceros
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz_resultante[i][j] = 0;
        }
    }

    // Multiplicación de matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) { //se usa una tercera variable para que no se confunda con el aumento de filas y columnas
                matriz_resultante[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
}


int main() {
int matriz1[3][3]={{5,3,2},
                      {-1,2,3},
                      {3,0,1}};

printf("Matriz inicial:\n");//imprime la matriz inicial para que sea visible al usuario al momento de ejecutar el algoritmo.
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

double (*matriz_inversa)[3] = calcular_inversa(matriz);//calcula la inversa tomando como argumento la matriz extendida de 3x6
double matriz_resultante[3][3];//variable que almacena la matriz resultante
multiplicacion(matriz1, matriz_inversa, matriz_resultante);//llamada al procedimiento para calcular la matriz por su inversa

//imprime la matriz resultante
printf("\nResultado de la matriz dividida para si misma:\n");//imprime la matriz inversa
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriz_resultante[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
