#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>
int main() // Otsinkamashynnohonulia
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int i = 0; // ≥ Ц л≥чильник ≥терац≥й
	float precision, a; // а Ц допом≥жна зм≥нна
	precision = 1.0; // precision Ц обчислювана точн≥сть в≥дносно числа 1.0
m: precision = precision / 2.;
	a = precision + 1.0;
	i++;
	if (a > 1.0) goto m;
	printf("\n число д≥лень на 2: %6d\n", i);
	printf("машинний нуль: %e\n ", precision);
}
