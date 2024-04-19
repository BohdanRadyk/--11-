#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double fract(int, int);
double factorial(int);
int main() {
	int m, n, s;
	scanf("%d %d", &m, &n);
	printf("%lf\n", fract(m + 1, n + 1));
	return 0;
}
double fract(int x, int y) {
	double t;
	t = factorial(x + y) / (x * y);
	return t;
}
double factorial(int n) {
	int i;
	double p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p *= i;
	return p;
}
