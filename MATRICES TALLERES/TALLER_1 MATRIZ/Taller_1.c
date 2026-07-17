#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    char letra;
    int Mat [100][100];
    int VecP[100], VecI[100];
    int i, j, f, c, n, limP, limI;
    do{
        printf("Ingresar la dimension de la matriz: ");
        scanf("%d", &n);
        for (f = 0; f < n; f++){

            for (c = 0; c < n; c++){

                scanf("%d", &Mat[f][c]);

            }
            
        }
            i = 0;
            j = 0;
            for (f = 0; f < n; f++){
                for (c = 0; c < n; c++){    

                    if (Mat[f][c] %2 == 0){
                        VecP[j] = Mat[f][c];
                        j++;
                    }
                    else{
                        VecI[i] = Mat[f][c];
                        i++;
                    }
                    
                }
                
            }
        limI = i ;
        limP = j ;


        printf("**Numeros pares**\n");
        if (VecP[0] == 0){
            printf("No hay numeros pares\n");

        }
        if (VecP[0] != 0){

            for ( i = 0; i < limP; i++)
            {
                printf("VecP [%d]: %d \n", i, VecP[i]);
            }
            
        }
        printf("**Numeros Impares**\n");
         if (VecI[0] == 0){

            printf("No hay numeros pares");

        }
        if (VecI[0] != 0){

            for ( i = 0; i < limI; i++)
            {
                printf("VecP [%d]: %d \n", i, VecI[i]);
            }
            
        }

        printf("Desea procesar otra informacion? (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 'N' && letra != 'n') && (letra != 's' && letra != 'S'))
        {
            printf("Caracter incorrecto, ingrese un caracter valido (s/n): ");
            scanf(" %c", &letra);

        }


    } while (letra == 's' || letra == 'S');
    





    return 0;
}