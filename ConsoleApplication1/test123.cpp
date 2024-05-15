#define size 10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include <stdlib.h>
void vuvid(int a[])
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}
}
void napo(int a[])
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		a[i]= rand() % 100;
	}
}
void ki(int a[], int b)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > b)
		{
			counter++;
		}
	}
	printf("\n%d", counter);
}
int main()
{
	
	int mas[size];
	int bi;
	scanf("%d", &bi);
	napo(mas);
	vuvid(mas);
	ki(mas, bi);
}
