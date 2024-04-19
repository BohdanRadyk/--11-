#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void vuvid(char *riadok,int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("%c", riadok[i]);
	}
}
int main()
{
	char riadok[100];
	int a;
	printf("Vediti riadok:");
	scanf("%s", &riadok);
	printf("Vediti chuslo:");
	scanf("%d", &a);
	vuvid(riadok, a);
	
	
}