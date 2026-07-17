#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 

// Juan Serrano 4-831-787

void gotoxy (int x, int y){ //Almancena la información respecto a la posición del puntero
HANDLE Ventana;
Ventana = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Coordenadas;
Coordenadas.X = x;
Coordenadas.Y = y;

SetConsoleCursorPosition(Ventana, Coordenadas);

}

int main(){
    int c, f , x, y, n;
    char letra;
    do{
        x=0;
        y=3;  
        printf("Ingrese las dimensiones de la matriz:");
        scanf(" %d", &n);
        gotoxy(x,y); //Es donde se encuentran los datos de la posición actual del puntero
        y++;
        int Mat [n][n];
        printf("Ingrese los datos de la matriz: "); //Primero for para recopilar los datos de la matriz
        for ( f = 0; f < n; f++){
            for (c = 0; c < n; c++){
                gotoxy(x,y);
                scanf(" %d", &Mat[f][c]);
                x+=5;
            } 
            x=0;
            y++;
        }
        for ( f = 0; f < n; f++){   //For que realiza la operacion para clasificar numeros pares e impares
            for (c = 0; c < n; c++){
                if (Mat[f][c] % 2 == 0){
                    Mat[f][c] = 0;
                    
                }
                else{
                    Mat[f][c] = 1;
                }
            }   
            
        }
        gotoxy(x,y);
        x=0;
        y+=2;

        printf("*-* Matriz resultante *-*");
  
        x=0;
        y++;

        for ( f = 0; f < n; f++){ //Ultimo for que imprime la matriz resultante
            for (c = 0; c < n; c++){
                gotoxy(x,y);
                printf("%d", Mat[f][c]);
                x+=5;
            } 
            y++;
            x=0;
        }
        gotoxy(x,y);
        x=0;
        y+=2;
        
        printf("Desea procesar otra informacion?(s/n): ");
        scanf(" %c", &letra);
        while ((letra !='s' && letra !='S') && (letra !='N' && letra !='n')){
            system("cls");
            printf("Caracter invalido, ingrese (s/n): ");
            scanf(" %c", &letra);
        }
        system("cls");
        
    } while (letra=='S'|| letra== 's');


    return 0;
}
