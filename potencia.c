#include <stdio.h>

void potenciaMatriz(int matriz[3][3], int exponente) {
    int matriz_resultante[3][3];


        // Calcular la potencia de la matriz
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matriz_resultante[i][j] = matriz[i][j];
            }
        }
        
        for (int k = 1; k < exponente; k++) {
            int matriz_resultante2[3][3];
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    matriz_resultante2[i][j] = matriz_resultante[i][j];
                }
            }
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    matriz_resultante[i][j] = 0;
                    for (int k = 0; k < 3; k++) {
                        matriz_resultante[i][j] += matriz_resultante2[i][k] * matriz[k][j];
                    }
                }
            }
        }

    // Mostrar el resultado
    printf("La matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("La matriz anterior elevada al exponente %d, es:\n", exponente);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3] = {{1, 3, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
int exponente;


    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    potenciaMatriz(matriz, exponente);

    return 0;
}