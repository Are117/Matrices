#include <stdio.h>

int main(){

int matriz[3][3]={{1,2,3,},
                  {5,6,7,},
                  {9, 10, 11}};

for(int i=0; i<3; i++){//uso del for para recorrer filas
    for(int j=0; j<3; j++){//uso del for para recorrer columnas
        printf("%d ", matriz[j][i]);//imprime la matriz pero colo primero las columnas y luego las filas
    }
    printf("\n");
}

return 0;
}