#include<stdio.h>


int main()
{
	int x = 2;
	float z;
	float y;
	z = 0.5*(y=2.3*x)+x++/3*y;
	printf("z = %f\n",z);
}