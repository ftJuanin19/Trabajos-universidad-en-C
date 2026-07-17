#include <stdio.h>
#include <stdlib.h>
//programa que carge un vector de 5 elementos, imprimir los elementos divisibles por un numero dado
int main (){
    int Vec [5];
    int Div, i;
    char letra;
    do
    {
        printf("Ingrese los numeros al vector:\n");
        for ( i = 0; i < 5; i++){
            printf ("VEC[%d]: ", i);
            scanf(" %d", &Vec[i]);
        }
        printf("\nIngrese un valor: ");
        scanf(" %d", &Div);
        printf("\nLos numeors divisibles entre %d son: \n", Div);
        for ( i = 0; i < 5; i++){
                if ((Vec[i] % Div == 0))
                    {
                        printf("VEC[%d]: %d\n", i, Vec[i]);
                    }
            
        }

        printf("\nDesea procesar otra informacion (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 'S' && letra !='s') && (letra != 'N' && letra !='n'))
        {
            system("cls");
            printf("Caracter invalido, ingrese s/n: ");
            scanf(" %c", &letra);
        }
    } while (letra == 'S' || letra == 's');
    
    return 0;
}