#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

#define PHRAISE "O, ��� ������ ��'�"

int main()
{
	//������������ ���������
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// ��������
	/*
	int a = 67;
	int b = 33;
	int c = a + b + 7;
	printf("a + b + 7 =%d\n", c);
	
	printf("\n");
	printf("\n");

	a = 8;
	b = 7;
	c = a + 5 * b;
	printf("a + 5 * b =%d\n", c);

	printf("\n");
	printf("\n");

	a = 8;
	b = 7;
	c = (a + 5) * b;
	printf("(a + 5) * b =%d\n", c);

	printf("\n");
	printf("\n");

	a = 8;
	b = ++a;
	printf("a =%d\n", a);
	printf("b =%d\n", a);

	printf("\n");
	printf("\n");

	a = 8;
	b = a++;
	printf("a =%d\n", a);
	printf("b =%d\n", a);

	printf("\n");
	printf("\n");

	a = 8;
	b = a--;
	printf("a =%d\n", a);
	printf("b =%d\n", a);

	printf("\n");
	printf("\n");

	a = 8;
	b = --a;
	printf("a =%d\n", a);
	printf("b =%d\n", a);

	printf("\n");
	printf("\n");
	*/

	// �������� 1
	/*
	char name[50];
	printf("�� ��� �����?\n");
	scanf("%s", name);

	printf("�����, %s. %s ", name, PHRAISE);
	printf("���� ��'� ���������� � %zu ���� � ����� %zu ������ ���'��.\n",
		    strlen(name), sizeof name);

	printf("³������ ����� ���������� � %zu ���� ", strlen(PHRAISE));
	printf("� ����� %zu ������ ���'��.\n", sizeof PHRAISE);

	printf("\n");
	printf("\n");
	*/
	// �������� 2.1 
	/*
	float x = 1.4;
	float y = 2;
	int z;
	
	z = x / 2 * 7 + y / 4 - 1;
	printf("z = %d\n", --z);
	*/
	// �������� 2.2
	/*
	int x = 2;
	int z;
	float y;

	z = 0.5 * (y = 2.3 * x) + x++ / 3 * y;
	printf("z = %d\n", z);
	*/
	// �������� 2.3
	/*
	int x;
	int y = 3;
	float z;

	z = 1.1 * (x = ++y / 2.) + 0. * x;
	printf("z = %4.1f\n", z);
	*/
    // 7 � ���. 1
    /*
    printf("����� ���� int �������� %d ����.\n", sizeof(int));
    printf("����� ���� char �������� %d ����.\n", sizeof(char));
    printf("����� ���� float �������� %d ����.\n", sizeof(float));
    printf("����� ���� double �������� %d ����.\n", sizeof(double));
	*/
    // 7 � ���. 2
    /*
	// ���������� �� �����������
    // ���������� ++ � ��������� --

    int n = 1;
	printf("n = %d \n", n);
	// n++
	printf("prefix: ++n = %d\n", ++n);
	printf("postfix: n++ = %d\n", n++);
	printf("after-postfix: n = %d\n", n);
	// n--
	printf("prefix: --n = %d\n", --n);
	printf("postfix: n-- = %d\n", n--);
	printf("after-postfix: n = %d\n", n);
	*/
    //  7 � ���. 3
    /*
	int n = 1, m = 1, res1, res2;
	res1 = n++ * m;
	res2 = n++ - m;
	printf("res1 = %d\n", res1);
	printf("n = %d\n", n);
	printf("res2 = %d\n", res2);
	printf("n = %d\n", n);
	*/
    // 7 � ���. 4.1
    /*
	int a, b = 3;
	float c;
	c = b % 2 + (a = ++b / 2) + 1.1;
	printf("a = %d, c = %4.1f\n", a, c);
	printf("%f\n", b % 2);
	printf("%d\n", a);
	*/
	// 7 � ���. 4.2
    /*
    //int x = 2, z;
	float y = 2.1;
	float x = 2, z;
	z = x++ * y + y / x * 3;
	printf("x = %f, z = %f\n", x, z);
	*/
	// 7 � ���. 4.3
	
    float x1 = 1.1, y1 = 0, z1;
	int a1;
	z1 = (a1 = x1++) * y1 + 3 * x1;
	printf("z1 = %4.1f\n", z1);
   
	return 0;
}