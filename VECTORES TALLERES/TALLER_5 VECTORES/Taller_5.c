#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

// Programa quer cargue vector n elelmentos, ingresar un nuevo elemento en la posicion (n+1) e imprima el nuevo vector
int main(){

    char letra;
    int i, n = 100, dim;
    int Vec [n];
    do{
        printf("Ingrese la dimension del vector: ");
        scanf("%d", &dim);
        for ( i = 0; i < dim; i++){
            printf("VEC[%d]: ", i);
            scanf(" %d", &Vec[i]);
        }

        i = dim;
        printf("Ingresar el nuevo elemento: ");
        scanf(" %d", &Vec[i]);

        for ( i = 0; i <= dim; i++){
            printf("VEC[%d]: %d \n", i, Vec[i]);
        }

        printf("Desea procesar otra informacion? (s/n): ");
        scanf(" %c", &letra);

        while ((letra != 'n' && letra != 'N') && (letra != 's' && letra != 'S') ){
                system("cls");
                printf("Caracter invalido ingrese (s/n): ");
                scanf(" %c", &letra);
        }
    } while (letra == 's' || letra == 'S');

    return 0;
}