#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int j = 1;
	char probil[2] = " ";

	scanf("%d", &n);
	if (n % 2 != 0)
	{
		int b=1;
		int tmp = n / 2;
		for (int c = n; c >0 ; c=c-2)
		{

			
			for (int i = tmp; i > 0; i--)
			{
				printf(" ");
			}
			for (int j=0 ; j < b; j++)
			{
				printf("*");
			}
			tmp--;
			b = b + 2;
			printf("\n");
		}
		
	}
	else
	{
		int b = 1;
		int tmp = n / 2;
		for (int c = n; c > 0; c = c - 2)
		{


			for (int i = tmp; i > 0; i--)
			{
				printf(" ");
			}
			for (int j = 0; j < b; j++)
			{
				printf("**");
			}
			tmp--;
			b = b + 1;
			printf("\n");
		}

	}

}