
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <math.h>
int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int A;
	int B;
	int C;
	int D;
	double x1;
	double x2;
	printf("Enter A>>\n");
	scanf("%d", &A);
	printf("Enter B>>\n");
	scanf("%d", &B);
	printf("Enter C>>\n");
	scanf("%d", &C);
	D = (B * B) + 4 * A * C;
	if (D == 0)
	{
		x1 = -D / (2 * A);
		printf("У даному рівнянні один корінь %f>>\n", x1);
	}
	else if (D < 0)
	{
		printf("У даному рівнянні немає коренів>>\n");
	}
	else
	{
		x1 = (-B + sqrt(D)) / (2 * A);
		x2 = (-B - sqrt(D)) / (2 * A);
		printf("Розвязком даного квадратного рівнння є x1=%f x2=%f", x1, x2);
	}

	return 0;

}