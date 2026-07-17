#include <stdio.h>

/*
Kathleen Creus 3-756-2280
Raquel Lorenzo 8-1041-647
Roriy Rovira 8-1039-1818
Juan Serrano 4-831-787 
*/

int main()
{
    int num, i;
    int sum1 = 0;
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
    printf("\n");
    return 0;
}