#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void)
{
	int magic;
	int guess;
	int m = 0;
	srand(time(NULL));
	magic = rand() % 10;
	printf("vgaday chuslo:");
	scanf("%d", &guess);
	while (guess != magic) {
		m++;
		printf("nevirno\n");
		printf("m=%d\n", m);
		printf("vgaday chuslo:");
		scanf("%d", &guess);
	}
	printf("**virno**");
	printf("magichne chuslo rivne %d", magic);
}