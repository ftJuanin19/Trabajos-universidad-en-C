#include <stdio.h>
#include <stdlib.h> // libreria que incluye la funcion system, que nos sirve para limpiar pantalla

// Juan Serrano 4-831-787

char SN;
int main()
{

    do
    {
        int num, i;
        int sum1 = 0;
   
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        printf("\nNumeros divisores de %d son: \n", num);
        for (i=1; i<=num; i++) {
            if (num % i == 0)
            {
                sum1 += i;
                if (i + 1 > num)
                {
                    printf("%d = %d", i, sum1);
                }
                else
                {
                    printf("%d + ", i);
                }
            }
        
        }  
        printf("\nDesea procesar otra informacion? (s/n): ");
        scanf(" %c", &SN);
            if ( SN == 's' || SN == 'S')
            {
                system ("cls"); // Esta funcion es la encargada de limpiar la pantalla. En caso de poner S, limpia y vuelve a preguntar
            }
            else
                if ( SN == 'N' || SN == 'n')
                printf ("\n");
                else
                    do {
                        printf("Caracter no valido ingrese (s/n): "); // en caso de que ingresen algo que no sea n o s
                        scanf(" %c", &SN);
                            if ( SN == 's' || SN == 'S')
                             {
                             system ("cls");
                             }
                    } while ((SN != 'N' && SN != 'n') && (SN != 's' && SN != 'S'));
        
    
    } while (SN != 'N' && SN != 'n'); // condicion que permite que mientras se presione s continue el ciclo
    printf("\n");
    system("cls"); //cuando presiona n se limpia definitivamente
    return 0;
}