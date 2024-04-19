#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int x[100]; int t;
	for (t = 0; t < 100; ++t) {
		x[t] = t;
	}
	for (t = 0; t < 100; ++t) {
		printf("%d ", x[t]);
	}
}
