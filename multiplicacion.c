#include <stdio.h>

// Definición de la función de multiplicación de matrices
void multiplicacion(int matriz[3][3], int matriz2[3][3], int matriz_resultante[3][3]) {
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
    int matriz_resultante[3][3];

    int matriz[3][3] = {{1, 3, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int matriz2[3][3] = {{1, 3, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    // Llamada a la función de multiplicación
    multiplicacion(matriz, matriz2, matriz_resultante);

    // Imprimir la matriz resultante
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}