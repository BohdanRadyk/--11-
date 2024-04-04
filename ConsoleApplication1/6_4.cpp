#define riadok "Чудова погода"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int vik;
	char name[30];
	printf("Скільки вам років?\n");
	scanf("%d", &vik);
	printf("як вас звати?\n");
	scanf("%s", name);
	printf("Привіт %s! якому(ій) %d Років", name, vik);
}