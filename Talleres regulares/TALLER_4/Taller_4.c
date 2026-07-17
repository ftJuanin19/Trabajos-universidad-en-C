#include<stdio.h>
#include <stdlib.h> // es la libreria que permite usar la funcion system

int main()
{
    int num, i;
    char e;
    
    do {
        printf("\n");
        printf("\nIngrese un numero (entero): ");
        scanf("%d", &num);
            printf("\nNumeros Pares\n");
            for(i=2; i<num; i+=2){
                printf("%d, ", i);
            }
            printf("\nNumeros impares\n");
            for(i=1; i<num; i+=2){
            printf("%d,", i);


            }
        printf("\nDESEA CONTINUAR EL PROGRAMA?");
        printf("\nINGRESE (S)PARA SI Y (N) PARA NO: ");
        scanf(" %c", &e); // recuerda el espacio antes del % sino te ignora por completo la funcion scanf
        
    } while (e != 'n' && e != 'N');
    
    printf("Programa finalizado\n");
  
    system("cls"); //Funcion encargada de limpiar la pantalla
    return 0;
}