#include<stdio.h>

int main(){
    char Let[] = {'A','B','C','D','E'};
    int i;
    printf("Impresion de los elementos \n\n");
    for (i=0; i<5;i++){
        printf("%c ", Let[i]);
    }
    printf("\n");
    return 0;
}