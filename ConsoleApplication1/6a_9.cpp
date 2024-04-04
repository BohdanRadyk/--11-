#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int A_xy = 1;
	int B_x;
	int B_y;
	int C_x;
	int C_y;
	int k;
	printf("Enter k>>\n");
	scanf("%d", &k);

	B_x = 2 * k;
	B_y = (2 * k) - 1;
	C_x = -2 * k;
	C_y = k + 2;

	double a = sqrt(pow((A_xy - B_x), 2) + pow((A_xy - B_y), 2));
	double b = sqrt(pow((B_x - C_x), 2) + pow((B_y - C_y), 2));
	double c = sqrt(pow((C_x - A_xy), 2) + pow((C_y - A_xy), 2));

	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	double r = s / p;

	printf("Перимерт>> %f Площа>> %f Радіус вписаного кола %f\n", p * 2, s, r);
}