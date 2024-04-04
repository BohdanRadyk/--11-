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
	printf("%d метрів тканини коштували %f гривень \n А один метр коштує %f гривень \n", a, b, one_m);
	printf("Число PI рівне %f.\n", PI);
	printf("IBM сумісні комп'ютори набули широкого розповсюдження. На той час вони коштували ");
	printf("%c%d", '$', c);
}