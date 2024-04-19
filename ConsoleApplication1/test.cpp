#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a[10] = { 1,3, 8, 7,5,4,1,2,4,7 };
	int par=0;
	int nepar=0;
	int op=0;
	for (size_t i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d PARNE\n", a[i]);
			par++;
		}
		else
		{
			printf("%d NE PARNE\n", a[i]);
			nepar++;
		}
		op++;
	}
	printf("\n\n");
	printf("%d PARNUX\n",par);
	printf("%d Ne PARNUX\n",nepar);
	printf("%d OPeraciil\n",op);
}