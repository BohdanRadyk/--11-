#define riadok "������ ������"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int vik;
	char name[30];
	printf("������ ��� ����?\n");
	scanf("%d", &vik);
	printf("�� ��� �����?\n");
	scanf("%s", name);
	printf("����� %s! �����(��) %d ����", name, vik);
}