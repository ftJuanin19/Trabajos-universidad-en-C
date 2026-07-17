#include<stdio.h>
#include<stdlib.h>
//
int main()
{
char sn;
    do
    {  
    int N, num, sump = 0, sumi = 0, i;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);
        for (i = 1; i <= N ; i++) 
        {
            num = 0;
            printf("NUM [%d]:", i);
            scanf(" %d", &num);
            if (num % 2 == 0)
            {
                sump += num;
            }
            else
            {
                sumi += num;
            }

        }
        printf("La suma de los numeros pares es %d", sump);
        printf("\nLa suma de los numeros impares es %d", sumi);
        printf("\nDesea procesar otra informacion? (s/n): ");

        scanf(" %c", &sn);
            if ( sn == 's' || sn == 'S')
            {
                system ("cls"); 
            }
            else
                if ( sn == 'N' || sn == 'n')
                printf ("\n");
                else
                    do {
                        printf("Caracter no valido ingrese (s/n): "); 
                            if ( sn == 's' || sn == 'S')
                             {
                             system ("cls");
                             }
                    } while ((sn != 'N' && sn != 'n') && (sn != 's' && sn != 'S'));


    } while (sn != 'N' && sn !=  'n');
    printf("\n");
    system("cls"); 





    return 0;
}