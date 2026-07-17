#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Vec[5];
    int i, sumP = 0, sumI = 0;
    printf("Impresion de los elementos \n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Vec[%d]: ", i);
        scanf("%d", &Vec[i]);  
    }
    for ( i = 0; i < 5; i++)
    {
        if (Vec[i] % 2 == 0)
        {
            sumP += Vec[i];
        }
        else
        {
            sumI += Vec[i];
        }
    }
   
    printf("La suma de los elementos pares es %d\n", sumP);
    printf("La suma de los elementos impares es %d\n", sumI);
    return 0;  
}