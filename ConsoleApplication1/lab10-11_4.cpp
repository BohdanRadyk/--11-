#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float A;
	float B;
	char znak;
	start:
	printf("Введіть перше число>>");
	scanf("%f", &A);
	printf("Введіть друге число>>");
	scanf("%f", &B);
	dia:
	printf("Введіть операцію яку хочете над ним провести>>");
	scanf(" %c", &znak);
	if (znak == '+')
	{
		printf("%1.1f + %1.1f=%1.2f", A,B, A + B);
	}
	else if (znak == '-')
	{
		printf("%1.1f - %1.1f=%1.2f", A, B, A - B);
	}
	else if (znak == '*')
	{
		printf("%1.1f * %1.1f=%1.2f", A, B, A * B);
	}
	else if (znak == '/')
	{
		if (A == 0 || B == 0)
		{
			printf("На нуль ділити не можна спробуйте знову\n");
			goto start;
		}
		else
		{
			printf("%1.1f / %1.1f=%1.2f", A, B, A / B);
		}
		
	}
	else
	{
		printf("Ви ввели не вірний символ спробуйте знову\n");
		goto dia;
	}



}