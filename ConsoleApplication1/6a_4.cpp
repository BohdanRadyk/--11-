#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
	int start = 65;
	int end = start + 10;
	printf("ACII\t\t ID\t\t 8\t\t 16\t\t\n\n");
	for (start; start < end; start++)
	{
		printf("%c\t\t %d\t\t %o\t\t %x\t\t\n", start, start, start, start);
	}




}