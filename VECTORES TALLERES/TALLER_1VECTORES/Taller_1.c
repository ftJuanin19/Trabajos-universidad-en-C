#include<stdio.h>

int main()
{
    int i;
    int VecN [12] = {8, 7, 9, 6, 0, -1, 1, 11, 10, 5, 2, 4};
    char VecL [12] = {'E','A','A','J','S','O','U','N','R','N','R',' '};
    
    i = 3;
    while (i>=0)
    {
        printf("%c", VecL[i]);
        i = VecN[i];
    }

    return 0;
}