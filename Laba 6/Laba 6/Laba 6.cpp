#define PI 3.14159
#define riadok "������ ������"
#define STOP '*'

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

int main()
{

	//������������ ���������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a = 5;
	float b = 23.5;
	int c = 31000;
	printf("%d ����� ������� ��������� %f �������.\n", a, b);
	printf("�������� ����� pi ���� %f\n", PI);
	printf("IBM ����� ����'������ �������� �������� ��������������.\n");
	printf("%c%d\n",'$',c);
	
	
	printf("\n");
	printf("\n");

	printf("/%d/\n", 557);
	printf("/%10d/\n", 557);
	printf("/%-10d/\n", 557);

	printf("\n");
	printf("\n");

	printf("/%8d/\n", 21949);
	printf("/%8d/\n", -1611);
	printf("/%8d/\n", -8380);
	printf("/%8d/\n", 2143);

	printf("\n");
	printf("\n");
	
	printf("/%f/\n", 6543.21);
	printf("/%e/\n", 6543.21);
	printf("/%4.2f/\n", 6543.21);
	printf("/%3.1f/\n", 6543.21);
	printf("/%10.3f/\n", 6543.21);
	printf("/%10.3e/\n", 6543.21);

	printf("\n");
	printf("\n");

	printf("/%2s/\n", riadok);
	printf("/%15.s/\n", riadok);

	printf("\n");
	printf("\n");

	printf("%d\n",557);
	printf("%o\n",557);
	printf("%x\n",557);
	printf("%d\n",-557);

	printf("\n");
	printf("\n");
	/*
	int vik;
	char name[30];
	printf("Vash vik?\n");
	scanf("%d", &vik);
	printf("Vvedit vashe imya\n");
	scanf("%s", name);
	printf("Pryvit %s jakomy(iy) %d rokiv", name, vik);
	*/
	int vik;
	char age[10]; // ������ ���� ��� ���������� ����� �����
	char name[30];

	printf("Vash vik?\n");
	fgets(age, sizeof(age), stdin); // ������������� fgets ��� ���������� ���������� �����
	vik = atoi(age); // ���������� ����� � ���� �����

	printf("Vvedit vashe imya\n");
	fgets(name, sizeof(name), stdin); // ������������� fgets ��� ���������� ���������� �����

	printf("Pryvit %s jakomy(iy) %d rokiv\n", name, vik);

	printf("\n");
	printf("\n");

	char ch;
	ch = getchar();
ml: if(ch != STOP)
{
	putchar(ch);
	ch = getchar(); goto ml;
}

	printf("������ �����\n");
	return 0;
}