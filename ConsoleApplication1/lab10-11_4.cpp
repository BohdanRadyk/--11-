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
	printf("������ ����� �����>>");
	scanf("%f", &A);
	printf("������ ����� �����>>");
	scanf("%f", &B);
	dia:
	printf("������ �������� ��� ������ ��� ��� ��������>>");
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
			printf("�� ���� ����� �� ����� ��������� �����\n");
			goto start;
		}
		else
		{
			printf("%1.1f / %1.1f=%1.2f", A, B, A / B);
		}
		
	}
	else
	{
		printf("�� ����� �� ����� ������ ��������� �����\n");
		goto dia;
	}



}