#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[80], s2[80];
	scanf("%s", &s1);
	scanf("%s", &s2);
	printf("Dovzuna: %d %d\n", strlen(s1), strlen(s2));
	if (!strcmp(s1, s2))
	{
		printf("Ryadky rivni\n");
		strcat(s1, s2);
		printf("%s\n", s1);
		strcpy(s1, "Perevirka\n");
		printf(s1);
		return 0;
	}

}