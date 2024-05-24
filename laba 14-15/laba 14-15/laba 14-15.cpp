#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

int main()
{
	// 2
	/*
    int x[100];
    int t;
	for (t = 0; t < 100; ++t)
	{
		x[t] = t;
	}
	for ( t = 0; t < 100; ++t)
	{
		printf("%d ", x[t]);
	}
	*/
	//3
	/*
	int t, i, num[3][4];
	for ( t = 0; t < 3; ++t)
	{
		for (i = 0; i < 4; ++i)
		{
			num[t][i] = (t * 4) + i + 1;
		}
	}
	for (t = 0; t < 3; ++t)
	{
		for (i = 0; i < 4; ++i)
		{
			printf("%3d", num[t][i]);
		}
		printf("\n");
	}
	*/
	//4
	/*
	register int t, i, j;
	printf("Dlya vuxody vvedit pystuyi rydok.\n");
	for ( t = 0; t < MAX; t++)
	{
		printf("%d:", t);
		gets_s(text[t]);
		if (!*text[t])
		{
			break;
		}
	}

	for ( i = 0; i < t; i++)
	{
		for (j = 0; text[i][j]; j++)
		{
			putchar(text[i][j]);
			putchar('\n');
		}
	}
	*/
    //
	
	int a[10];
	int sum = 0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100 + 1;
		sum = sum + a[i];
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n%d", sum);
	
}
