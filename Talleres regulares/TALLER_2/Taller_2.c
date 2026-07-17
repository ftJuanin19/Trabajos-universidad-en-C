#include<stdio.h>

int main ()
 {
    char Letra;
    printf("Ingrese un caracter: ");
    scanf(" %c", &Letra);

      if (Letra == 'A' || Letra == 'a' || Letra == 'E' || Letra == 'e' || Letra == 'I' || Letra == 'i' || Letra == 'O' || Letra =='o' || Letra == 'U' || Letra == 'u'){
         printf("El caracter %c ingresad es una vocal",Letra);
      }
      else{
         printf("El caracter %c ingresado es una consonante",Letra);
      }
      
    return 0;
 }