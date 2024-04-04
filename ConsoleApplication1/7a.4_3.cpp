#include<stdio.h>

int main() {
	float x = 1.1, y = 0, z;
	int a;
	z = (a = x++) * y + 3 * x;
	printf("z=%4.1f\n", z); 
}