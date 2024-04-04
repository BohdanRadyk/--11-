#define pi 3.14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int R;
	float L;
	float P;
	printf("Enter R>>\n");
	scanf("%d", &R);
	L = (2 * pi) * R;
	P = pi * (R * R);
	printf("Length: %f>>\n", L);
	printf("Area: %f>>\n", P);


}