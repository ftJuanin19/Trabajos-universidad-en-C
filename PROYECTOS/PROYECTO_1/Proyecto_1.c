#include<stdio.h>
#include<stdlib.h>
#include<windows.h> //Agrega la funcion sleep para pausar la compilacion


int main()
{
    int filas, i, h, Au;
    char sn;
    do
    {
        printf("Ingrese la cantidad de filas: ");
        scanf(" %d", &filas);
        h = filas;
        for (i = 1; i <= filas; i++) //Ciclo que regula las veces que repite el ciclo, que es igual al numero que ingresa el usauraio (filas)
        {
            Au = 1; // Variable de aumento, controla el ciclo While
            while (Au <= i)
            {
                if (Au <=1)// Este es para que la primara fila de la piramide de imprima sin '*'
                {
                    if (h >= 10) //Este es para cuando el numero es de mas de dos digitos
                    {
                    printf("%d", h);  
                    Sleep(100); //esta funcion pausa la ejecucion 100 ms, para que la informacion se imprima poco a poco
                    Au++; //Incremento +1 para que salga del while y h puede decrementar -1 en la siguiente vuelta, y como i aumenta +1, la condicon (Au<=i) sera cierta y volvera a entrar 


                    }
                    else //Este para el numero es menor que 10
                    {
                    printf("0%d ", h);
                    Sleep(100);
                    Au++;
                    
                    }
                }
                else // este es para cuando (Au > 1), por lo que se van a imprimir con el '*' antes de cada numero
                {
                    if (h>=10) //Para los numeros con mas de dos digitos
                    {
                    printf(" * %d", h);
                    Sleep(100);
                    Au++;
                  
                    }
                    else //Para los numeros menores de 10
                    {
                    printf(" * 0%d", h);
                    Sleep(100);
                    Au++;
                  
                    }
                }
            }
            printf("\n");
        
            h--; //esta varaible es la que se imprime, y se decrementa para que vaya del numero mayor al numero menor 
        }
        printf("\nDesea procesar otra informacion? (s/n): ");

            scanf(" %c", &sn);
                if ( sn == 's' || sn == 'S')
                {
                    system ("cls"); 
                }
                else
                    if ( sn == 'N' || sn == 'n')
                    printf ("\n");
                    else
                        do {
                            printf("Caracter no valido ingrese (s/n): "); 
                                scanf(" %c", &sn);
                                if ( sn == 's' || sn == 'S')
                                {
                                system ("cls");
                                }
                        } while ((sn != 'N' && sn != 'n') && (sn != 's' && sn != 'S'));


    } while (sn != 'N' && sn !=  'n');
    printf("\n");
    system("cls"); 

    return 0;
}
