#define PRAISE "�, ��� ������ ��'�!"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char name[50];
	printf("�� ��� �����?\n");
	scanf("%s", name);
	printf("�����,%s. %s\n", name, PRAISE);
	printf("���� ��'� ���������� � %zu ���� � ����� %zu ������ ���'��.\n", strlen(name), sizeof(name));
	printf("³������ ����� ���������� � %zu ����\n", strlen(PRAISE));
	printf("� ����� %zu ������ ���'��.\n", sizeof(PRAISE));
}