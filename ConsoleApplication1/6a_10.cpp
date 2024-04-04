#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 1000;
	double b = 0.0001;
	double res = pow((a - b), 3) - (pow(a, 3) - 3 * a * pow(b, 2)) / pow(b, 3) - 3 * pow(a, 2) * b;
	printf("RES= %f\n ", res);
}