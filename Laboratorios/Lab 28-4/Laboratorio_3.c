// prgarma que lea n canatidad de numero, que imprima el primero y el ultimo sumados
#include<stdio.h>
#include<stdlib.h>
int num, i, Nsum, sum;
int main ()
{
    printf("Ingrese cantidad de numeros: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        printf("NUM [%d]: ", i);
        scanf(" %d", &sum);
        Nsum += sum;
        if (i = sum)
        {
            Nsum -= sum;
        }
        

    }
    printf("%d", Nsum);       
    



return 0;
}