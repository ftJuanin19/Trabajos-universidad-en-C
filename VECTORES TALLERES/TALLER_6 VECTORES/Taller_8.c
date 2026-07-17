#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    char letra;
    int i, dim, num, pos;
    int Vec[100];

    void gotoxy (x,y);
    
    do{
        printf("Ingresar la dimension del vector: ");
        scanf("%d", &dim);

        for ( i = 0; i < dim; i++){

            printf("Vec[%d]: ", i);
            scanf(" %d", &Vec[i]);

        }

        printf("Ingresar un nuevo elemento: ");
        scanf(" %d", &num);
        printf("Ingresar la posicion: ");
        scanf(" %d", &pos);
        while ((pos < 0) || (pos >= dim))
        {
            printf("Error, ingrese una dimension valida:");
            scanf(" %d", &pos);
        }
        
        Vec[pos] = num;

         for ( i = 0; i < dim; i++){

            printf("Vec[%d]: %d\n", i, Vec[i]);

        }

        printf("Desea procesar otra informacion? (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 's' && letra != 'S') && (letra != 'n' && letra != 'N'))
        {
            system("cls");
            printf("Error, caracter invalido, ingrese (s/n): ");
            scanf(" %c", &letra);
        }
        system("cls");
    } while (letra == 's' || letra == 'S');
    
    return 0;
}