#define size 5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include <stdlib.h>
void vuvid(int *a)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", *(a+i));
	}
}
void napo(int *a)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*(a+i) = rand() % 100;
	}
}
void sum(int *a)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + *(a+i);
	}
	printf("\nSum=%d", sum);
}
int main()
{

	int mas[size];
	napo(mas);
	vuvid(mas);
	sum(mas);
}