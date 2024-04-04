#include<stdio.h>


int main()
{
	int x;
	int y = 3;
	float z;
	z = 1.1*(x=++y/2)+0.3*x;
	printf("z = %4.1f\n", z);
}