#include<stdio.h>


int main()
{
	int a = 2, b = 10, c;
	do
	{
		b = b + a; 
		c = 10 * a; 
		a++;
	} 
	while (a < 5);
	printf("\nb=%d c=%d a=%d", b, c, a);
}