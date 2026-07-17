#include<stdio.h>
#include<stdlib.h>

int main(){

    int Vec [5];
    int i;
    char letra;
    do{
        printf("Ingrese cinco numeros enteros\n");
        for (i = 1; i <= 5; i++){
            printf("Vec [%d]: ", i);
            scanf("%d", &Vec[i]);
        }
        i = 1;
        while (Vec[i]<= 5)
        {
            if (Vec[i] > 0)
            {
                printf("%d, ", Vec[i]);
                i++;
            }
            else{
                printf("%d, ", Vec[i]);
                i++;
            }
            
        }
       
        
        

    } while ((letra == 'S') || (letra == 's'));
    







 








    return 0;
}
