#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    int sum1 = 0;
    char SN;
    do
    {
       
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
        system ("cls");
    
    } while (SN != 'N' && SN != 'n');
    printf("\n");
    system("cls");
    return 0;
}