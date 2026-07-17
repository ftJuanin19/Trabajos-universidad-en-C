#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Mat[3][3];
    int c, f;
    printf("Carga de la matriz \n\n");
    for (f = 0; f < 3; f++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &Mat[f][c]);
        }
        printf("\n");
       
       
    }
    printf("%d", Mat[f][c]);
    return 0;  
}