#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long long factorial(int n)
{
	if (n == 0 || n == 1) return 1;
	else return n * factorial(n - 1);
}

int main()
{
	int X;
	double M_x;
	double R_x=0;
	int i=0;
	double g;
	scanf("%d", &X);
	M_x=cos(X);
	do
	{
		R_x =R_x+ pow(-1, i) * (pow(X, 2 * i) / factorial((2 * i)));
		g = fabs(R_x) - fabs(M_x);
		i++;
		printf("%f\n", g);
	} while (fabs(g) > 0.00001);
	printf("I=%d\n",i);
	printf("M_x%f\n", M_x);
	printf("R_x%f\n", R_x);
}