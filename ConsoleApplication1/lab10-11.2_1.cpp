//������ ����� 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
int main(void)
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int magic;
	int guess;
	srand(time(NULL));
	magic = rand() % 100;
restart:
	printf("������ ������ �����:");
	scanf("%d", &guess);
	if (guess == magic) {
		printf("** ³���!! **\n");
		printf("������ ����� ���� %d\n", magic);
	}
	else if (guess == -22)
	{
		printf("** �� �������! **");
		return 0;
	}
	else {
		printf("** �� ����,��������� �� ��� (��� ������� ����� -22) **\n");
		if (guess > magic) {
			printf("����� ��������\n");

			goto restart;
		}
		else {
			printf("����� ������\n");
			goto restart;
		}
	}
	return 0;
}