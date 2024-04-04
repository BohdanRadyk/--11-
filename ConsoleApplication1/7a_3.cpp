#include<stdio.h>

int main() {

	int n = 1, m = 1, res1, res2;
	res1 = n - ++m;
	printf("res1=%d\n", res1);
	res2 = ++m * --n;
	printf("res2=%d", res2);
	return 0;
}