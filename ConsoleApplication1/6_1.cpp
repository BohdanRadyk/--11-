#define PI 3.14159
#include <stdio.h>
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a = 5;
	float b = 23.3;
	int c = 31000;
	float one_m = b / a;
	printf("%d ����� ������� ��������� %f ������� \n � ���� ���� ����� %f ������� \n", a, b, one_m);
	printf("����� PI ���� %f.\n", PI);
	printf("IBM ����� ����'����� ������ �������� ��������������. �� ��� ��� ���� ��������� ");
	printf("%c%d", '$', c);
}