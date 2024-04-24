#include <stdio.h>
#include <math.h>
int main()
{

    int x;
    scanf("%d", &x);
    if (x < 1|| x > 26)
    {
        printf("not valid input");
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x-i; j++)
            {
               
                    printf(" ");
                
            }
            if(i==1){
            for (int j = x-i; j <x; j++)
            {
               
                    printf("%c",'A'+j-x+i);
                
            }}
            else{
                 for (int j = x-i; j <x; j++)
            {
               
                    printf("%c",'A'+j-x+i-1);
                
            }
            for (int j = x-i; j <x; j++)
            {
               
                    printf("%c",'A'+x-j-1);
                
            }
            }
            printf("\n");
        }
    }
    return 0;
}
