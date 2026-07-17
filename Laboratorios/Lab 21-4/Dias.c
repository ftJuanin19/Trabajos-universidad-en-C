#include<stdio.h>
#include<stdlib.h>

char SN;
int main ()
{
    do
    {
        int dia;
        printf("Dias de la semana");
        printf("\nIngrese un numero del (1 al 7):");
        scanf(" %d", &dia);

        while (dia<=0 || dia>7) {
            printf("Numero invalido, ingrese un numero entre (1-7)");
            scanf( "%d", &dia);
        }

            switch (dia)
            {
            case 1:
                printf("El numero 1 corresponde al dia es Lunes");
                break;
            case 2:
                printf("El numero 2 corresponde al dia martes");
                break;
            case 3:
                printf("El numero 3 corresponde al dia miercoles");
                break;
            case 4:
                printf("El numero 4 corresponde al dia jueves");
                break;
            case 5:
                printf("El numero 5 corresponde al dia viernes");
                break;
            case 6:
                printf("El numero 6 corresponde al dia sabado");
                break;\
            case 7:
                printf("El numero 7 corresponde al dia domingo");
                break;
            default:
                break;
            }

        printf("\nDesea iniciar otra operacion?(s/n): ");
        scanf(" %c", &SN);
        if ( SN == 's' || SN == 'S')
        {
            system ("cls"); 
        }
            else
                if ( SN == 'N' || SN == 'n')
                printf ("\n");
                else
                    do {
                        printf("Caracter no valido ingrese (s/n): "); 
                        scanf(" %c", &SN);
                            if ( SN == 's' || SN == 'S')
                            {
                            system ("cls");
                            }
                    } while ((SN != 'N' && SN != 'n') && (SN != 's' && SN != 'S'));
            
    
    } while (SN == 'S' || SN == 's'); 
    printf("\n");
    system("cls"); 
    return 0;
}