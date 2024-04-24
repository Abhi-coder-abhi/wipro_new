#include <stdio.h>
#include <math.h>
int main()
{

    int x;
    int y = 1;
    scanf("%d", &x);
    if (x < 2 || x > 10)
    {
        printf("not valid input");
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                if (j < x)
                    printf("%d*", y);
                else
                    printf("%d", y);
                y++;
            }
            printf("\n");
        }
    }
    return 0;
}
