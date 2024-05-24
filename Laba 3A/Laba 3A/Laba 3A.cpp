#include <stdio.h>
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// 1
	/*
	float var1, var2;
	printf("¬вед≥ть перше число (var1):");
	scanf_s("%f", &var1);
	printf("¬вед≥ть перше число (var2):");
	scanf_s("%f", &var2);
	printf("var1 > var2 даЇ %d\n", var1 > var2);
	printf("var1 < var2 даЇ %d\n", var1 < var2);
	printf("var1 == var2 даЇ %d\n", var1 == var2);
	printf("var1 >= var2 даЇ %d\n", var1 >= var2);
	printf("var1 <= var2 даЇ %d\n", var1 <= var2);
	printf("var1 != var2 даЇ %d\n", var1 != var2);
	printf("!var1 даЇ %d\n", !var1);
	printf("!var2 даЇ %d\n", !var2);
	printf("var1 || var2 даЇ %d\n", var1 || var2);
	printf("var1 && var2 даЇ %d\n", var1 && var2);
	*/
	// 2
	/*
	float var1, var2; 
	printf("¬вед≥ть перше число (var1): "); 
	scanf_s("%f", &var1); 
	printf("¬вед≥ть друге число (var2): "); 
	scanf_s("%f", &var2); 
	printf("var1 > var2 це %s\n", var1 > var2 ? TRUE : FALSE); 
	printf("var1 < var2 це %d\n", var1 < var2 ? TRUE : FALSE); 
	printf("var1 == var2 це %s\n", var1 == var2 ? TRUE : FALSE); 
	printf("var1 >= var2 це %s\n", var1 >= var2 ? TRUE : FALSE); 
	printf("var1 <= var2 це %d\n", var1 <= var2 ? TRUE : FALSE); 
	printf("var1 != var2 це %d\n", var1 != var2 ? TRUE : FALSE); 
	printf("var1 || var2 це %d\n", var1 || var2 ? TRUE : FALSE); 
	printf("var1 && var2 це %d\n", var1 && var2 ? TRUE : FALSE); 
	printf("!var1 це %d\n", !var1 ? TRUE : FALSE); 
	printf("!var2 це %d\n", !var2 ? TRUE : FALSE);
	*/
	// 3.1
	/*
	int x, y, z;
	x = 2;
	y = 1;
	z = 0;

	x = x && y || z;
	printf("%d\n", x);
	printf("%d\n", x || !y && z);
	*/
	// 3.2
	/*
	int a = 0, b = 3, c;
	c = b % 2 || (a >= 0) && (++b / 2 * a) == 0;
	printf("a = %d, c = %d\n", a, c);// a=0 c=1
	*/
	// 3.3
	/*
	int a = 1, b = 0, c;
	c = b * 2 || (a >= 0) && (++b * a) == 0;
	printf("c = %d\n", c);//c=0
	*/
	// 3.4
	/*
	int x = 1, y = 2, z;
	z = (x / 2 * 7 <= 0) && (y < 0) || (y % x == 0);
	printf("z = %d\n", --z);//z=0
	*/
	// 3.5
	/*
	int x = 1, z, b = 0, y = 2;
	z = (x++ * y >= 0) || b++ || (x / y * 3 == 0);
	printf("z = %d\n", z);//z=1
	*/
	// 3.6
	/*
	int x = 1, y = 0, z = 2, a = 0;
	z = ((a = x++) * y == 0) || a < 0 && z;
	printf("z = %d\n", z);//z=1
	*/
	// 3.7
	/*
	int x = 2, z, y = 0;
	z = (x == 0) && (y = x) || (y > 0);
	printf("z = %d\n", z);//z=0
	*/
	// 3.8
	
	int x = 0, y = 3, z;
	z = (++x > y || y-- && y > 0);
	printf("z = %d\n", z);//z=1
	


}