#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int magic;
	int guess;
	srand(time(NULL));
	magic = rand()%10;
	printf("vgaday chuslo:");
	scanf("%d", &guess);
	while (guess != magic) {
		printf("nevirno\n");
		printf("vgaday chuslo:");
		scanf("%d", &guess);
		
	}
	printf("**virno**\n");
	printf("magichne chuslo rivne %d", magic);


}