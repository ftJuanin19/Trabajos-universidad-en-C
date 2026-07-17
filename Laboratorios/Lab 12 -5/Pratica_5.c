#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, sumT;
    int Au = 1, medio = 1/2, i;
    printf("Ingrese la cantidad de terminos (positivos): ");
    scanf("%d", &num); 
   
    for (i = 1; i <= num; i++)
    {
        Au += ((medio)*(i * i) + (medio * i)); 
        printf (" %d", Au);
    
    }
    










    return 0;
}