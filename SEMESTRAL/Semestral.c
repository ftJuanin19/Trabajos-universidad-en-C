#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy (int x, int y){ 
HANDLE Ventana;
Ventana = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Coordenadas;
Coordenadas.X = x;
Coordenadas.Y = y;

SetConsoleCursorPosition(Ventana, Coordenadas);
}

int main(){
    char letra;
    int Mat[100][100];
    int Dim, f, c, i;
    do
    {
        Dim = 0;
        gotoxy(0,2);
        printf("Ingrese la dimension de la matriz (n*n): ");
        scanf(" %d", &Dim);
        while (Dim <= 1 || Dim % 2= 0)
        { 
            printf("Dimension invalida, ingrese una dimension valida: ");
            scanf(" %d", &Dim);
        }
        
    } while (letra=='S' || letra=='s');
    





    return 0;
}
