#include <stdio.h>
#include <math.h>
int main()
{
	int x = 2;
	int n = 64;
	for (int i = 2; i <= n; i++)
	{
        if(x > __INT16_MAX__){
            break;
        }
		printf("%d ", x);
x=x*2;
	}

	return 0;
}
