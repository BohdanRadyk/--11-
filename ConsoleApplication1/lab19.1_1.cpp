#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include<Windows.h>
int main() 
{ 
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	FILE *in; //���� ��������� �� ���� 
	int ch; 
	if((in=fopen("proba.txt", "r")) != NULL) // ³���������� ���� ��� �������, ������������ �� �� ����. �������� in ����� ���������� �� ��������� FILE, �� �������� �� proba. 
	{ while (ch = getc(in) != EOF)// ���������� ������ �� in 
	{
		putc(ch, stdout);// ��������� ������� � ����������� ���� �� �����. 

	}
	fclose(in); 
	}
	else {
		printf("���� proba �� ����������� \n");
	}
}