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
    int i, f, c, x, y, dim, xsim, ban;
    char letra;
    do
    {
        ban = 0;
        x = 0;
        y = 2;
        dim = 0;
        i = 1;
        printf("Ingrese la dimesion de la matriz (n*n): ");
        scanf(" %d", &dim); 
        while (dim % 2 == 0 || dim < 0 || dim == 0 || dim == 1)
        {
            printf("Dimension invalida, ingrese una dimension impar: ");
            scanf(" %d", &dim);
            system("cls");
            ban = 1;
        }
        if (ban==1)
        {
            printf("Dimension de la matriz: %d", dim);
        }
        
        //Para limpiar los valores de la matriz
        for (f = 0; f < 100; f++) {
            for (c = 0; c < 100; c++) {
                Mat[f][c] = 0; 
            }
        }

        for ( f = 0; f < (dim); f++)// Para el primer for, se almancenan los numeros, necesarios para hacer el cuadro en base a la dimension, que es la operacion (dim*4-4)
        {
            for ( c = 0; c < (dim); c++)
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
        for ( f = 0; f < 1; f++)//Para el primer lado, solo se imprimira la primera fila (para el resto igual se imprimra una sola fila, siguiento la secuencia numerica)
        {
            for ( c = 0; c < (dim); c++)
            {
                if (Mat[f][c]!=0)
                {
                    if (Mat[f][c]<10){
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
        }

        y--;
        gotoxy(x,y);

        for ( f = 1; f < 2; f++)
        {
            for ( c = 0; c < (dim); c++)
            {
                if (Mat[f][c]!=0)
                {
                    if (Mat[f][c]<10){
                        if (c==(dim-1))
                        {
                            y--;
                            gotoxy(x,y);
                            printf("0%d", Mat[f][c]);
                        }
                        else{
                        x+=4;
                        gotoxy(x,y);
                        printf("0%d", Mat[f][c]);
                        }

                    }
                    else{
                        if (c==(dim-1))
                        {
                            y--;
                            gotoxy(x,y);
                            printf("%d", Mat[f][c]);
                        }
                        else
                        {
                            x+=4;
                            gotoxy(x,y);
                            printf("%d", Mat[f][c]);
                        }
                                            
                        
                    
                    }
                }
                
            }
        }

        xsim = x; //Almancenamos el valor de la x luego de este for, ese valor se estara diviendo entre 2 y servirá para la posición del simbolo ($$)
        
        for ( f = 2; f < 3; f++)
        {
            for ( c = 0; c < (dim); c++)
            {
                if (Mat[f][c]!=0)
                {
                    if (Mat[f][c]<10){
                        if (c==(dim-1)||c==(dim-2))
                        {
                            x-=4;
                            gotoxy(x,y);
                            printf("0%d", Mat[f][c]);
                        }
                        else{
                            y--;
                            gotoxy(x,y);
                            printf("0%d", Mat[f][c]);
                        }

                    }
                    else{
                        if (c==(dim-1)||c==(dim-2))
                        {
                            x-=4;
                            gotoxy(x,y);
                            printf("%d", Mat[f][c]);
                        }
                        else
                        {
                            y--;
                            gotoxy(x,y);
                            printf("%d", Mat[f][c]);
                        }
                    }
                }
                
            }
        }

        for ( f = 3; f < 4; f++)
        {
            for ( c = 0; c < (dim); c++)
            {
                if (Mat[f][c]!=0)
                {
                    if (Mat[f][c]<10){
                        x-=4;
                        gotoxy(x,y);
                        printf("0%d", Mat[f][c]);

                    }
                    else{
                        if (c==(dim-3))
                        {
                            
                        }
                        else
                        {
                            x-=4;
                            gotoxy(x,y);
                            printf("%d", Mat[f][c]);
                        }
                    }
                }
                
            }
        }
        
        //Impresion del los caracteres especiales en el centro del cuadro
        x = xsim/2;
        y = 2+((dim-1)/2);
        gotoxy(x,y);
        printf("$$");


        //Reposicion el cursor fuera del cuadro, para la impresion del mensaje para procesar otra informacion
        y = dim+ 5;
        x=0;
        gotoxy(x,y);
      

        printf("Desea procesar otra informacion (s/n): ");
        scanf(" %c", &letra);
        while ((letra != 's' && letra != 'S') && (letra != 'n' && letra != 'N'))
        {
           system("cls");
           printf("Caracter invalido, ingrese (s/n): ");
           scanf(" %c", &letra);
        }
        
        system("cls");

    } while (letra == 's' || letra == 'S');
    
    return 0;
}