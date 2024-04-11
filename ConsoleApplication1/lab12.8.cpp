#define PI 3.1415
#include <stdio.h>
#include <math.h>
int main()
{
	int N = 32;
	double i_2;
	double y;
	double min=0;
	double max=0;
	for (size_t i = 1; i < 32; i++)
	{
		i_2=pow(i, 2);
		y = i_2 * exp(-i_2 / 100) * sin(((2 * PI) / N )* i);
		printf("Y=%-9.2f\n", y);
		if (min > y)min = y;
		if (max < y)max = y;
	}
	printf("min:%.2f\n", min);
	printf("max:%.2f\n", max);
}