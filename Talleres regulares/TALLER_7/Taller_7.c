#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N1, N2, N3, MIN, MAX, MID;
    printf("NUM[1]:");
    scanf("%d", &N1);
    printf("NUM[2]:");
    scanf("%d", &N2);
    printf("NUM[3]:");
    scanf("%d", &N3);

    if (N1 > N2)
    {
        MAX = N1;
        MIN = N2;
        if (N3>N1)
        {
            MAX = N3;
            MIN = N2;
            MID = N1;
        }
        else
        {
            if (N2<N3)
            {
                MAX = N1;
                MIN = N2;
                MID = N3;
            }
            else
            {
                MAX = N1;
                MIN = N3;
                MID = N2;
            }
            
            
            
        }
        
    }
    else 
    {   
        MAX = N2;
        MIN = N1;
        if (N3 < N1)
        {
            MAX = N2;
            MID = N1;
            MIN = N3;
        }
        else
        {
            if (N3 > N2)
            {
                MAX = N2;
                MID = N3;
                MIN = N1;
            }
            
         
        }
    }   

    printf("Numero mayor %d, numero del medio %d, numero menor %d", MAX, MID, MIN);
    
    system("cla");
    

    return 0;
}