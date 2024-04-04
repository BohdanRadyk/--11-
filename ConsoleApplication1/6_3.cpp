#define riadok "Чудова погода"
#include <stdio.h>
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	printf("/%2s/\n", riadok);
	printf("/%15.s/\n\n", riadok);

	printf("%d\n", 557);
	printf("%o\n", 557);
	printf("%x\n", 557);
	printf("%d\n", -557);
}