#include<stdio.h>
#include<stdlib.h>

int main ()
{   char op, SN;
    float N1, N2, sum, res, mul, div;
    do
    {
        printf("Ingrese dos numeros");
        printf("\nNumero [1]: ");
        scanf(" %f", &N1);  
        printf("\nNumero [2]: ");
        scanf(" %f", &N2);
        printf("\nQue operacion desea realizar? Suma, resta, multiplicacion o division (+,-,*,/): ");
        scanf(" %c", &op);
        switch (op)
        {
        case '+' :
            sum = N1+N2;
            printf("La suma de [%f] y [%f] es igual a %f", N1, N2, sum);
            break;
        case '-':
            res = N1-N2;
            printf("La resta de [%f] y [%f] es igual a %f", N1, N2, res);
            break;
        case '*':
            mul = N1*N2;
            printf("La multiplicacion de [%f] y [%f] es igual a %f", N1, N2, mul);
            break;
        case '/' :
            while (N2 == 0)
            {
            printf("No se puede dividir entre 0, ingrese un numero distinto de cero: ");
            scanf(" %f", &N2);
            }
            div = N1/N2;
            printf("La division de [%f] y [%f] es igual a %f", N1, N2, div);
            break;
        
        default:
            break;
        
        }
        
        printf("\nDesea procesar otra informacion? (s/n): ");
        scanf(" %c", &SN);
            if ( SN == 's' || SN == 'S')
            {
                system ("cls"); // Esta funcion es la encargada de limpiar la pantalla. En caso de poner S, limpia y vuelve a preguntar
            }
            else
                if ( SN == 'N' || SN == 'n')
                printf ("\n");
                else
                    do {
                        printf("Caracter no valido ingrese (s/n): "); // en caso de que ingresen algo que no sea n o s
                        scanf(" %c", &SN);
                            if ( SN == 's' || SN == 'S')
                            {
                            system ("cls");
                            }
                    } while ((SN != 'N' && SN != 'n') && (SN != 's' && SN != 'S'));
            
    
    } while (SN != 'N' && SN != 'n');
    printf("\n");
    system("cls"); 

    return 0;
}