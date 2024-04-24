#include <stdio.h>

int main()
{
	int y;
    printf("ENTER NUMBER WHOSE TABLE IS PRINTED:");
    scanf("%d",&y);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d", y,i,y*i);
		printf("\n");	
        }

	return 0;
}
