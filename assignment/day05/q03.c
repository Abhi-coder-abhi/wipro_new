#include <stdio.h>
#include <math.h>
int main()
{
	int x = 0;
	int y = 0;
	for (int i = 1; i <= 50; i++)
	{
        if(i%2 == 0){
          x = x+i;  
        }
        else
        y=y+i;
	}
printf("even sum is %d\n",x);

printf("odd sum is %d",y);
	return 0;
}
