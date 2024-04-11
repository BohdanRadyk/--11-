//Магічне число 3
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
	printf("Вгадай магічне число:");
	scanf("%d", &guess);
	if (guess == magic) {
		printf("** Вірно!! **\n");
		printf("Магічне число рівне %d\n", magic);
	}
	else if (guess == -22)
	{
		printf("** Ви здалися! **");
		return 0;
	}
	else {
		printf("** Не вірно,спробуйте ще раз (щоб здатися ведіть -22) **\n");
		if (guess > magic) {
			printf("Число завелике\n");

			goto restart;
		}
		else {
			printf("Число замале\n");
			goto restart;
		}
	}
	return 0;
}