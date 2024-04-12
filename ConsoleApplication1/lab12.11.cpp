#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{
	int X;
	float M_x;
	float R_x=1;
	int i;
	scanf("%d", &X);
	M_x=cos(X);
	for (i = 1;(M_x-R_x)<0.00001 ; i++)
	{
		R_x=pow(-1,i)*(pow(X,2*i)/factorial;
	}
}