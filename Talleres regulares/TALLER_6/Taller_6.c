#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N, num, i, SumP = 0, SumN = 0;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);
    for (i=1; i <= N; i++)
    {
        printf("NUM [%d]: ", i);
        scanf("%d", &num);
        if (num>0)
        {
            SumP += num;
        }
        else
        {
            SumN += num;
        }
        
    }
    printf("La suma de los numero positivos es: %d", SumP);
    printf("\nLa suma de los numeros negativos es: %d", SumN);
    


    return 0;
}