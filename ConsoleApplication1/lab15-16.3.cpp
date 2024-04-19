#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int riadok[10];
	int sum=0;
	for (size_t i = 0; i < 10; i++)
	{
		riadok[i]= rand() % 10;
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d", riadok[i]);
		sum += riadok[i];
	}
	printf("\nsum: %d", sum);
}