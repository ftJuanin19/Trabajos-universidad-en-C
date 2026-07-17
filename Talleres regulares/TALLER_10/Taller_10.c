#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, i, MAX, MIN, num, MAXP, MINP;;
    char sn;
    do
    {
        printf("Cantidad de numero que va a ingresar: ");
        scanf("%d", &N);
        while (N < 2)
        {
            printf("Debe ingresar mas de dos numeros: ");
            scanf(" %d", &N);
        }
        for ( i = 1; i <= N; i++)
        {
            num = 0;
            printf("NUM [%d]: ", i);
            scanf(" %d", &num);
            if (i == 1)
            {
                MAX = num;
                MAXP = num;
                MINP = num;
            }
            else
            {
                if (num > MAX)
                {
                MAX = num;
                MIN = MAXP;
                }
                else
                {
                    if (num < MINP)
                    {
                        MIN = num;
                        MINP = num;
                    }
                }  
            
                
            }
            
            
        }
        printf("El numero mayor es %d", MAX);
        printf("\nEl numero menor es %d", MIN);
    
        printf("\nDesesa procesar otra informacion: ");
        scanf(" %c", &sn);

        while ((sn != 's' && sn != 'S') && (sn != 'n' && sn != 'N'))
        {
            printf("Caracter invalido, porfavor ingrese (s/n): ");
            scanf(" %c", &sn);
        }
        system("cls");            
        
        
    
    } while (sn == 's' || sn =='S');
    
    return 0;
}