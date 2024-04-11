#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int price;
	
	printf("_________________________________________\n");
	printf("|Numeros  |2        |3        |4        |\n");
	for (int i = 1; i <= 20; i++)
	{
		printf("|%-9d|%-9.4f|%-9.4f|%-9.4f|\n", i, sqrt(i),cbrt(i),pow(i,0.25));
	}
	printf("_________________________________________");
}
