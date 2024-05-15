#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include<Windows.h>
int main() 
{ 
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	FILE *in; //Опис вказівника на файл 
	int ch; 
	if((in=fopen("proba.txt", "r")) != NULL) // Відкривається файл для читання, перевіряється чи він існує. Вказівник in тепер посилається на структуру FILE, що пов’язана із proba. 
	{ while (ch = getc(in) != EOF)// Отримується символ із in 
	{
		putc(ch, stdout);// Виведення символа в стандартний потік на екран. 

	}
	fclose(in); 
	}
	else {
		printf("Файл proba не відкривається \n");
	}
}