#include<stdio.h>
#include<stdlib.h>

char sn;
int main ()
{
    do
    {
        int Ter, i;
        float sum = 0, divi, n = 1;
        printf("Ingrese la cantidad de terminos: ");
        scanf("%d", &Ter);
        while (Ter == 0)
        {
            printf("No se puede dividir entre 0, porfavor ingrese un numero valido distinto de 0: ");
            scanf("%d", &Ter);
        }
        
        for ( i = 1; i <= Ter; i++)
        {
            divi = n/i;
            sum += divi;
            if (i<Ter)
            printf("1/%d + ", i);
            else
            printf("1/%d", i);
            if (i == Ter)
            {
                printf(" = %f", sum);
            }
            
        }

        printf("\nDesea procesar otra informacion? (s/n): ");
        scanf(" %c", &sn);
        if ( sn == 's' || sn == 'S')
        {
            system ("cls"); 
        }
        else
        {
            if ( sn == 'N' || sn == 'n')
            {
            printf ("\n");
            }
            else
            {
                do
                {
                    printf("Caracter no valido ingrese (s/n): "); 
                    if ( sn == 's' || sn == 'S')
                    {
                        system ("cls");
                    }
                } while ((sn != 'N' && sn != 'n') && (sn != 's' && sn != 'S'));
            }
        }
    } while (sn != 'N' && sn !=  'n');
    printf("\n");
    system("cls"); 
    return 0;
}