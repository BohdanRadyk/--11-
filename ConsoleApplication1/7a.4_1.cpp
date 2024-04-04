#include<stdio.h>

int main() {
	int a, b = 3;
	float c;
	c = b % 2 + (a = ++b / 2) + 1.1;
	printf("a=%d,c=%4.1f\n", a, c);
}