#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int j =1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < j ;i++)
		{
			printf("*");

		}
	printf("\n");
	j++;
	}
}