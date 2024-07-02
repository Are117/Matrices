#include <stdio.h> //inclusión de librería estandar

int main(){//declaración de función principal

int matriz[3][3]={{1,2,3}, //definición de matriz
                  {5,6,7},
                  {9, 10, 11}};


//uso del bucle for para que vaya recorriendo filas y columnas
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(i==0){//condición para la primera fila, solo imprimirá las esquinas
            if(j==0 || j==2){
                printf("%d ", matriz[i][j]);
            }else{
                printf("       ");    
            }
        }
        if(i==1){//en la segunda fila solo imprimirá espacios
            printf("       "); 
        }
        if(i==2){//en la tercera fila solo imprimirá los extremos, al igual que en la primera fila
           if(j==0 || j==2){
                printf("%d ", matriz[i][j]);
            }else{
                printf("       ");    
            }
        }
    }
     printf("\n"); //imprime un salto de página cada que cambia de fila
}
return 0;
}




