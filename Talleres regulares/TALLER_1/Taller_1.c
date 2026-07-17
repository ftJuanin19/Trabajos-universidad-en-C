#include<stdio.h>
//Programa que lea dos numeros (enteros),e
//Imprima el numero mayor o menor (if else)

// Juan Serrano
// Raquel Lorenzo
// Kathleen Crews
// Rory Roviera

int main()
{
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    if(num1 < num2)
        printf("El numero %d es menor que el numero %d", num1, num2);
    else
        if(num1 > num2)
        printf("El numero %d es mayor que %d", num1, num2);
        else
        printf("Ambos son iguales a %d", num1);
    return 0;
}