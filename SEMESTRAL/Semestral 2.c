#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy (int x, int y){
    HANDLE Ventana;
    Ventana = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Coordenadas;
    Coordenadas.X= x;
    Coordenadas.Y= y;

    SetConsoleCursorPosition(Ventana, Coordenadas);
}
int main(){
    char letra;
    int f, c, i, dim;
    do
    {
        /* code */
    } while (letra == 'S'||letra == 's');
    














}