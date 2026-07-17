#include<stdio.h>

int main()
{
    int n1, n2, nu1;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &n2);
    nu1= n1 * n2;
    if(nu1 % 2 == 0)
        printf("La multiplicacion ede %d * %d = %d y es par", n1, n2, nu1);
    else
        printf("La multiplicacion de %d * %d = %d y es impar", n1, n2, nu1);
    printf("\n");
    return 0;
}