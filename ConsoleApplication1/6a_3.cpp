#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	float b;
	char c[10];
	long d;
	printf("Enter INT>>\n");
	scanf("%d", &a);
	printf("Enter FLOAT>>\n");
	scanf("%f", &b);
	printf("Enter CHUR>>\n");
	scanf("%s", &c);
	printf("Enter LONG>>\n");
	scanf("%li", &d);

	printf("INT is: %d FLOAT is: %f CHUR is: %s LONG is: %li", a, b, c, d);
}