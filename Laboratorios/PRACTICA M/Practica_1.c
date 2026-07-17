#include<stdio.h>

int main ()
{
    char Sexo;
    printf("Ingrese su sexo (F o f)(M o m):");
    scanf("%c", &Sexo);
    while ((Sexo != 'f' && Sexo != 'F') && (Sexo != 'm' && Sexo != 'M'))
    {
        printf("Error caracter no valido, ingrese (F o f)(M o m): ");
        scanf(" %c", &Sexo);
    }   
    printf("\n");
        switch (Sexo)
        {
        case 'F':
        case 'f':
            printf("El caracter F, la persona es femenina");
            break;
        case 'M':
        case 'm':
            printf("El caracter M, la persona es masculina");
            break;
        default:
            break;
        }
    
    return 0;
}