#define _CRT_SECURE_NO_WARNINGS
#define LINE 80
#include <stdio.h> 
int main()
{
	FILE* ff;
	char string[LINE];
	ff = fopen("opus.txt", "r");
	while (fgets(string, LINE, ff) != NULL)
		puts(string);
	fclose(ff);
}