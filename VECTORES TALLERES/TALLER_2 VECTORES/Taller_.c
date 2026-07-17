#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//Ingresar datos en un vector de n dimensiones y que los ordene de mayor a menor
int main (){
    char letra;
    int n, i, med, j;
    do{
        printf("Ingrese la dimension del vector: ");
        scanf(" %d", &n);
        int Vec[n];

        for ( i = 0; i < n; i++){
            printf("VEC[%d]: ", i);
            scanf(" %d", &Vec[i]);   
        }
         // Ordenar de mayor a menor
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - 1 - i; j++) {
                if (Vec[j] < Vec[j + 1]) {
                    med = Vec[j];
                    Vec[j] = Vec[j + 1];
                    Vec[j + 1] = med;
                }
            }
        }

        printf("++ VALORES ORDENADOS ++\n");
        for ( i = 0; i < n; i++){
            printf("%d ", Vec[i]);
        }
        
        printf("\nDesea procesar otra informacion? (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 'S' && letra != 's') && (letra != 'N' && letra != 'n')){
            system("cls");
            printf("Caracter invalido ingrese (s/n): ");
            scanf(" %c", &letra);
        }
        system("cls");
        
    
    } while (letra == 's'|| letra == 'S');
    
    return 0;
}