#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Vec[5] = {2, 7, 5, 9, 3};
    int i;
    printf("Impresion de los elementos \n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", Vec[i]);
    }
    printf("\n");
    
    return 0;  
}