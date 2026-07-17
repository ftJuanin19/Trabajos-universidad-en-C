#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int n, i, j;
    char opcion;

    do
    {
        printf("Ingrese la dimension de la matriz (n*n): ");
        scanf("%d", &n);

        while (n % 2 == 0 || n == 1)
        {
            system("cls");
            printf("Dimension invalida, ingrese un numero impar que no sea 1: ");
            scanf("%d", &n);
        }

        int Mat[n][n];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                Mat[i][j] = i + 1;
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                gotoxy(4 * j + 2, i + 2);

                if (i == j)
                {
                    if (i == n / 2)
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf("##");
                    }
                }
                else
                {
                    printf("%02d", Mat[i][j]);
                }
            }
        }

        gotoxy(0, n + 6);
        printf("Desea procesar otra informacion (s/n): ");
        scanf(" %c", &opcion);

        while (opcion != 's' && opcion != 'S' &&
               opcion != 'n' && opcion != 'N')
        {
            system("cls");
            printf("Caracter invalido, ingrese (s/n): ");
            scanf(" %c", &opcion);
        }

        system("cls");

    } while (opcion == 's' || opcion == 'S');

    return 0;
}