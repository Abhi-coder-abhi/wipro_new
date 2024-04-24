#include <stdio.h>
#include <math.h>
int main()
{
	int x = 3;
	int y = 0;
	for (int i = 1; i <=6; i++)
	{
       y=y+x;
       x=x*10+3;
	}
printf("sum is %d",y);
	return 0;
}
