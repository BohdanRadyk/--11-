#include<stdio.h>

int main() {
	float x = 2, z;
	float y = 2.1;
	z = x++ * y + y / x * 3;
	printf("x=%f z=%f\n", x, z);
}