#include <stdio.h> 
#include <Windows.h>


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	printf("����� ���� int �������� %zu ����.\n",sizeof(int));
	printf("����� ���� char �������� %zu ����.\n",sizeof(char));
	printf("����� ���� float �������� %zu ����.\n",sizeof(float));
	printf("����� ���� double �������� %zu ����.\n",sizeof(double));

}