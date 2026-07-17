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
    int i, f, c, x, y, dim;
    char letra;
    do
    {
        x = 0;
        y =2;
        dim = 0;
        i = 1;
        printf("Ingrese la dimesion de la matriz (n*n): ");
        scanf(" %d", &dim);
        for ( f = 0; f < (dim-1); f++)
        {
            for ( c = 0; c < (dim-1); c++)
            {
                if (i <= (dim*4-4))
                {
                   Mat[f][c]= i;
                    i++;
                }
                else{
                    Mat[f][c]= 0;
                    i++;
                }
            }
            
        }
        for ( f = 0; f < (dim); f++)
        {
            for ( c = 0; c < dim; c++)
            {
                if (y < (1+dim))
                {
                    if (Mat[f][c] != 0){

                        if (Mat[f][c] < 10){
                            gotoxy(x,y);
                            y++;
                            printf("0%d", Mat[f][c]);
                        }
                        else{
                            gotoxy(x,y);
                            y++;
                            printf("%d", Mat[f][c]);
                        }
        
                    }
                        
                }
                else{
                    if (x <= 3*(dim-1))
                    {
                        if (Mat[f][c] != 0){

                            if (Mat[f][c] < 10){
                                gotoxy(x,y);
                                y=1+dim;
                                x+=3;
                                printf("0%d", Mat[f][c]);
                            }
                            else{
                                gotoxy(x,y);
                                y=1+dim;
                                x+=3;
                                printf("%d", Mat[f][c]);
                            }
                        }
                    } 
                    if (x>3*(dim-1))
                    {
                        gotoxy(x,y);
                        y--;
                        x=3*(dim-1)-3;
                        printf("%d", Mat[f][c]);
                    }
                        
                    

      
                }
                    
                
            }
            
        }
    {
        gotoxy(x,y);
        y+=4;
        x=0;
        printf("Desea procesar otra informacion (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 's' && letra != 'S') && (letra != 'n' && letra != 'N'))
        {
           system("cls");
           printf("Caracter invalido, ingrese (s/n): ");
           scanf(" %c", &letra);
        }
    }
        

    } while (letra == 's' || letra == 'S');
    
    system("cls");






    return 0;
}