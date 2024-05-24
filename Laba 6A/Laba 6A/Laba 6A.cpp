#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

#define PI 3.14159265358979323846
#define STOP '*'
//#define _CRT_SECURE_NO_WARNINGS


int main()
{
	//Встановлення кодування
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//4
	int i;
	char line[] = "A$K&1n6s9Z";
	printf("%s\n", line);
	for ( i = 0; i < 10; i++)
	{
		printf(" %u", line[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf(" %o", line[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf(" %x", line[i]);
	}
	printf("\n");
	printf("\n");

	// 5
	int number_of_commodity[5] = {0, 5, 1, 2, 4};
	double price_of_commodity[5] = {6.32, 253.60, 17.29, 94.70, 99.99};
	double price;
	double end_price = 0;

	for ( i = 0; i < 5; i++)
	{
		price = number_of_commodity[i] * price_of_commodity[i];
		printf("price %d commodity %d = %.2f\n", number_of_commodity[i], i+1, price);
		end_price = end_price + price;
	}
	printf("full price %.2f",end_price);

	printf("\n");
	printf("\n");

	// 6
	double radius;
	double circuit;
	double area_of_circle;
	printf("print radius\n");
	if (scanf_s("%lf", &radius) != 1)
	{
		printf("Input error: expected a number\n");
		return 1; // Повертаємо 1, щоб позначити помилку
	}
	
	circuit = 2 * PI * radius;
	area_of_circle = PI * pow(radius, 2);

	printf("circuit with radius = %.4f\n", circuit);
	printf("area of a circle with radius = %.4f\n", area_of_circle);

	printf("\n");
	printf("\n");

	// 7 
	double a;
	double b;
	double c;
	double x1;
	double x2;
	double D;

	printf("ведіть коофеціент а\n");
	scanf_s("%lf", &a);
	printf("ведіть коофеціент b\n");
	scanf_s("%lf", &b);
	printf("ведіть коофеціент c\n");
	scanf_s("%lf", &c);

	D = b * b + 4 * a * c;
	if (D == 0)
	{
		x1 = -b  / 2 * a;
		printf("корені квадратного рівняння x1 = x2 = %f\n", x1);
	} 
	else if (D < 0)
	{
		printf("корені квадратного рівняння знаходяться в комплексній множені\n");
	}
	else
	{
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;

		printf("корені квадратного рівняння x1 = %f x2 =%f\n", x1, x2);
	}
	
	printf("\n");
	printf("\n");

	// 9
	//A(1;1) B(22;21) C(-22;14)

	int Xa = 1;
	int Xb = 22;
	int Xc = -22;
	int Ya = 1;
	int Yb = 21;
	int Yc = 14;

	double AB, BC, CA, perimeter, area, radius_inscribed_circle;

	AB = sqrt(pow((Xb - Xa), 2) + pow((Yb - Ya), 2));
	BC = sqrt(pow((Xc - Xb), 2) + pow((Yc - Yb), 2));
	CA = sqrt(pow((Xa - Xc), 2) + pow((Ya - Yc), 2));

	perimeter = AB + BC + CA;
	area = (perimeter / 2) * sqrt((perimeter / 2) * ((perimeter / 2) - AB) * ((perimeter / 2) - BC) * ((perimeter / 2) - CA));
	radius_inscribed_circle = area / (perimeter / 2);

	printf("Довжини сторін AB = %.3f, BC = %.3f, AC = %.3f,\n", AB, BC, CA);
	printf("Периметер трикутники =  %.3f,\n",perimeter);
	printf("Площа трикутника = %.3f,\n",area);
	printf("Радіус вписаного кола = %.3f,\n",radius_inscribed_circle);

	printf("\n");
	printf("\n");

	// 10 
	int A = 100;
	double B = 0.001;
	
	double x, y, z, m;

	x = pow(A + B, 4);
	y = pow(A, 4) - 4 * pow(A, 3) * B;
	z = 6 * pow(A, 2) * pow(A, 2) - 4 * A * pow(B, 3) + pow(B, 4);
	m = (x - y) / z;

	printf("дріб = %.3f", m);

	printf("\n");
	printf("\n");

	//8

	char ch;
	ch = getchar();
ml:if (ch != STOP)
{
	putchar(ch);
	ch = getchar();
	goto ml;
}
else
{
	Beep(440, 1000);
}

	return 0;
}