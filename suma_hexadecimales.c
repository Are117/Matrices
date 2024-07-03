#include <stdio.h>
#include <string.h>


void conversion(int n){//declaración de la función que hará la conversión de decimal a hexadecimal
    int x; //declaración de la variable x que servirá para almacenar el cociente de las divisiones entre 16
    int residuo; //variable que se usará para almacenar el residuo del valor entre 16
    char hexa[20] = ""; // Arreglo para almacenar la representación hexadecimal

    x = 1;

    while (x > 0) {
        x = n / 16; //x almacena el valor de la división del valor entre 16
        residuo = n % 16; //se almacena el valor del residuo
        char digit[2]; //declaración de la variable digit que servirá para almacenar los valores hexadecimales
        if (residuo >= 10 && residuo <= 15) { //se aplica una condición para que en caso de que sea un valor entre 10 y 15 lo reemplace con letras de la A a la F
            digit[0] = 'A' + (residuo - 10);//se le resta 10 a residuo para que en caso de ser mayor de 10, esto se sume al valor de A en código ASCII y represente la siguiente letra de acuerdo al resultado de la resta
            digit[1] = '\0'; //carácter nulo para marcar final de la cadena
        } else {
            digit[0] = '0' + residuo; //almacena el valor hexadecimal de 0 en adelante 
            digit[1] = '\0';//carácter nulo para marcar final de la cadena
        }
        // Concatenar al principio de la cadena hexa
        char cadena[20]; //cadena temporal
        strcpy(cadena, hexa);//copia el contenido del arreglo hexa a la variable cadena
        strcpy(hexa, digit);//copia el nuevo dígito hexadecimal en el arreglo hexa
        strcat(hexa, cadena);//concatena la variable cadena al final del arreglo hexa
        n = x;//actualiza la variable n para la siguiente iteración
    }
    printf("%s ", hexa);//imprime el valor del arreglo hexa
}

int main(){//declaración de la función principal

int matriz_resultante[3][3];//se declara una matriz 3x3

int matriz[3][3]={{1,2,3},
                  {5,6,7},
                  {9, 10, 11}};//se declara otra matriz de 3x3 y se le asignan valores

printf("La matriz resultante es\n");//imprime un mensaje
for(int i=0; i<3; i++){//recorre filas
    for(int j=0; j<3; j++){//recorre columnas
    matriz_resultante[i][j]=matriz[i][j]+matriz[i][j];//suma la matriz en determinada posición y asigna este valor a la matriz resultante
    conversion(matriz_resultante[i][j]);//realiza la conversión del número decimal en esta posición y lo imprime en hexadecimal
    }
    printf("\n");//imprime salto de línea par serparar filas
}



return 0;
}