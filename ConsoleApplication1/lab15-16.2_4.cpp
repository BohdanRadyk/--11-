#define MAX 100
#define LEN 80
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char text[MAX][LEN];

int main()
{

register int t, i, j; printf("Dlya vuxody vvedit pystuyi rydok.\n");
for (t = 0; t < MAX; t++) {
	printf("%d:", t); gets_s(text[t]);
	if (!*text[t]) {
		break;
	}
}
for (i = 0; i < t; i++) {
	for (j = 0; text[i][j]; j++) {
		putchar(text[i][j]);  putchar('\n');
	}
}
}