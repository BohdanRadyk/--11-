#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>
int main() // Otsinkamashynnohonulia
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int i = 0; // � � �������� ��������
	float precision, a; // � � �������� �����
	precision = 1.0; // precision � ����������� ������� ������� ����� 1.0
m: precision = precision / 2.;
	a = precision + 1.0;
	i++;
	if (a > 1.0) goto m;
	printf("\n ����� ����� �� 2: %6d\n", i);
	printf("�������� ����: %e\n ", precision);
}
