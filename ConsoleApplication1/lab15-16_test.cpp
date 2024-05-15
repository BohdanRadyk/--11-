#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include <stdlib.h>
#define c 3;
void vuvid(int a[][c], int b)
{
	for (size_t i = 0; i < b; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

}


int main()
{
	int const b = 2;
	int riadok[b][b];
	int counter = 1;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			riadok[i][j] = counter++;
		}
	}
	vuvid(riadok, b);
}
