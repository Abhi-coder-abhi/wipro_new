#include <stdio.h>

int main()
{
	int x = 0;
	int n = 10;
	int y;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", x);
		if (i == 0)
		{ y=x+3;
		}
		else
			y = y + 2;
			x=x+y;
	}

	return 0;
}
