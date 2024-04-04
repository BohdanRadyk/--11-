#define PRAISE "О, яке чудове ім'я!"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char name[50];
	printf("Як вас звати?\n");
	scanf("%s", name);
	printf("Привіт,%s. %s\n", name, PRAISE);
	printf("Ваше ім'я складається з %zu літер і займає %zu комірок пам'яті.\n", strlen(name), sizeof(name));
	printf("Вітальна фраза складається з %zu літер\n", strlen(PRAISE));
	printf("І займає %zu комірок пам'яті.\n", sizeof(PRAISE));
}