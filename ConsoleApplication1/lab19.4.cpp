#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include <stdlib.h>

void napo(int a[])
{
	srand(time(NULL));
	for (int i = 0; i < 12; i++)
	{
		a[i] = rand() % 100;
	}
}
void vuvid(int a[])
{
	for (int i = 0; i < 12; i++)
	{
		printf("%d\t", a[i]);
	}
}
int main()
{
	FILE* f;
	int mas[12];
	int mas2[12];
	napo(mas);
	printf("Napovnena\n");
	vuvid(mas);

	if ((f = fopen("proba.txt", "w")) == NULL)
	{
		perror("proba.txt");
		return 1;
	}
	for (int i = 0; i < 12; i++)
		fprintf(f, "%d\n", mas[i]);
	fclose(f);
	if ((f = fopen("proba.txt", "r")) == NULL)
	{
		perror("proba.txt");
		return 1;
	}
	for (int i = 0; i < 12; i++)
		fscanf(f, "%d\n", &mas2[i]);
	fclose(f);
	printf("\nChutanna\n");
	vuvid(mas2);
}