#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Mat[][3] ={{5, 8, 1},{0, 2, 6},{9, 7, 3}};
    int c, f;
    printf("Impresion de los elementos \n\n");
    for (f = 0; f < 3; f++)
    {
        for (c = 0; c < 3; c++)
        {
             printf(" %d", Mat[f][c]);
        }
        printf("\n\n");
       
    }
    return 0;  
}