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
    int Mat[100][100];
    int n, f, c, x, y;
    char letra;
    do{
        x=0;
        y=3;
        printf("Ingrese la dimension de la matriz: ");
        scanf(" %d", &n);
        for (f = 0; f < n; f++){
            x = 0;
            for (c = 0; c < n; c++){
                gotoxy(x,y);
                scanf(" %d", &Mat[f][c]);
                x += 5;
            }
            y++;
        }
        printf("**Diagonola principal**\n");
        gotoxy(0,y+1);
        c=0;
        for (f = 0; f < n; f++){
                printf(" %d", Mat[f][c]);
                c++;
            
        }
        gotoxy(0,y+2);
    
        printf("Desea procesar otra informacion? (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 's' && letra != 'S') && (letra != 'n' && letra != 'N'))
        {
            system("cls");
            printf("Caracter invalido, ingrese (s/n): ");
            scanf(" %c", &letra);
        }
        system("cls");
        for (f = 0; f < n; f++){
        
            for (c = 0; c < n; c++){
                Mat[f][c] = 0;
            }

        }

        
    } while (letra == 's' || letra == 'S');
    
    
    return 0;
}