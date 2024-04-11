#include<stdio.h>

int main()
{
	int j = 0, k = 0;
	while (j < 5)
	{
		k += 10;
		j++;
	}
	printf("k=%d\n", k);
}