#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int tamaño, int matriz[]){//función para ordenar arreglos usando el metodo bubblesort
int arreglo2=0;
for(int i = 0; i < tamaño-1; i++){
    for(int j = 0; j < tamaño-i-1; j++){
    if(matriz[j]>matriz[j+1]){
    arreglo2=matriz[j];
    matriz[j]=matriz[j+1];
    matriz[j+1]=arreglo2;}
    }
}
}

//función para verificar que los números no se repiten
int buscar_num(int matriz[13], int numero, int tamaño){
int busqueda;
for(int i=0; i<tamaño; i++){
    if(matriz[i]==numero){
        return 1;
    }
}
return 0;
}
//función para generar numeros aleatorios
void generar_numeros(int tamaño,int matriz[]){
int numero=0;
for(int i = 0; i < 13; i++) { 
    do {
        numero = (rand() % 13) + 1; // Genera un número aleatorio entre 1 y 13
     } while(buscar_num(matriz, numero, i) == 1); // Verifica si el número ya está en la matriz
        matriz[i] = numero; // Asigna el número a la matriz
}
}

//función principal
int main(){
int matriz[4][13];
int tamaño=13;
srand(time(0));

int matriz1[13];
int matriz2[13];
int matriz3[13];
int matriz4[13];

generar_numeros(tamaño, matriz1);
generar_numeros(tamaño, matriz2);
generar_numeros(tamaño, matriz3);
generar_numeros(tamaño, matriz4);

//rellena la matriz madre con números aleatorios
int matriz_madre[4][13];
    for (int i = 0; i < 13; i++) {
        matriz_madre[0][i] = matriz1[i];
        matriz_madre[1][i] = matriz2[i];
        matriz_madre[2][i] = matriz3[i];
        matriz_madre[3][i] = matriz4[i];
}

//imprime la matriz con numeros aleatorios
printf("Las cartas en desorden se ubican asi:\n");
for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
    if(matriz_madre[i][j] == 1 || matriz_madre[i][j] == 11 || matriz_madre[i][j] == 12 || matriz_madre[i][j] == 13) {
            if(matriz_madre[i][j] == 1) {
                printf("A");
            }  
            else if(matriz_madre[i][j] == 11) {
                printf("J");
            }
            else if(matriz_madre[i][j] == 12) {
                printf("Q");
            }
            else if(matriz_madre[i][j] == 13) {
                printf("K");
            }
        } else {
            printf("%d", matriz_madre[i][j]);
        }
        printf("%c ", 3 + i);
    }
    printf("\n");
}

ordenar(tamaño, matriz1);
ordenar(tamaño, matriz2);
ordenar(tamaño, matriz3);
ordenar(tamaño, matriz4);

//rellena la matriz madre con los números ordenados
for(int i = 0; i < 13; i++){
    matriz_madre[0][i] = matriz1[i];
    matriz_madre[1][i] = matriz2[i];
    matriz_madre[2][i] = matriz3[i];
    matriz_madre[3][i] = matriz4[i];
}

//imprime los valores de la matriz ordenados
printf("\nLas cartas en orden se ubican asi:\n");
for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 13; j++) {
        if(matriz_madre[i][j] == 1 || matriz_madre[i][j] == 11 || matriz_madre[i][j] == 12 || matriz_madre[i][j] == 13) {
            if(matriz_madre[i][j] == 1) {
                printf("A");
            }  
            else if(matriz_madre[i][j] == 11) {
                printf("J");
            }
            else if(matriz_madre[i][j] == 12) {
                printf("Q");
            }
            else if(matriz_madre[i][j] == 13) {
                printf("K");
            }
        } else {
            printf("%d", matriz_madre[i][j]);
        }
        printf("%c ", 3 + i);
    }
    printf("\n");
}
    return 0;
}



