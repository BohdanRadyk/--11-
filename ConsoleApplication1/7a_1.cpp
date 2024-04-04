#include <stdio.h> 
#include <Windows.h>


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	printf("Числа типу int займають %zu байт.\n",sizeof(int));
	printf("Числа типу char займають %zu байт.\n",sizeof(char));
	printf("Числа типу float займають %zu байт.\n",sizeof(float));
	printf("Числа типу double займають %zu байт.\n",sizeof(double));

}