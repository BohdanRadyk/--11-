#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int i = 0; // � � �������� ��������
	float precision, a; // � � �������� �����
	precision = 1.0; // precision � ����������� ������� ������� ����� 1.0
m: precision = precision / 2.;
	a = precision + 1.0;
	i++;
	if (a > 1.0) goto m;
	printf("GOTO");
	printf("\nfloat ����� ����� �� 2: %d  ", i);
	printf("float �������� ����: %e\n", precision);

	int i_1 = 0;
	double precision_1, a_1;
	precision_1 = 1.0;
m_1: precision_1 = precision_1 / 2.;
	a_1 = precision_1 + 1.0;
	i_1++;
	if (a_1 > 1.0) goto m_1;
	printf("double ����� ����� �� 2: %d ", i_1);
	printf("double �������� ����: %le\n", precision_1);

	int i_2 = 0; 
	long double precision_2, a_2;
	precision_2 = 1.0; 
m_2: precision_2 = precision_2 / 2.;
	a_2 = precision_2 + 1.0;
	i_2++;
	if (a_2 > 1.0) goto m_2;
	printf("long double ����� ����� �� 2: %d ", i_2);
	printf("long double �������� ����: %Le\n", precision_2);

	//---------------------------
		i = 0;
		precision=0;
		a=1.1;
		precision = 1.0;
		for (i; a > 1.0; i++)
		{


			precision = precision / 2.;
			a = precision + 1.0;


		}
		printf("\n\nFOR");
		printf("\nfloat ����� ����� �� 2: %d ", i);
		printf("float�������� ����: %e\n", precision);

		i_1 = 0;
		precision_1 = 0;
		a_1 = 1.1;
		precision_1 = 1.0;
		for (i_1; a_1 > 1.0; i_1++)
		{


			precision_1 = precision_1 / 2.;
			a_1 = precision_1 + 1.0;


		}
		printf("double ����� ����� �� 2: %d ", i_1);
		printf("double �������� ����: %le\n", precision_1);

		i_2 = 0;
		precision_2 = 0;
		a_2 = 1.1;
		precision_2 = 1.0;
		for (i_1; a_2 > 1.0; i_2++)
		{


			precision_2 = precision_2 / 2.;
			a_2 = precision_2 + 1.0;


		}
		printf("long double ����� ����� �� 2: %d ", i_2);
		printf("long double �������� ����: %Le\n", precision_2);

	//------------------------------
		i = 0;
		precision = 0;
		a = 1.1;
		precision = 1.0;
		while (a > 1.0)
		{
			precision = precision / 2.;
			a = precision + 1.0;
			i++;
		}
		printf("\n\nWHILE");
		printf("\nfloat ����� ����� �� 2: %d ", i);
		printf("float�������� ����: %e\n", precision);


		i_1 = 0;
		precision_1 = 0;
		a_1 = 1.1;
		precision_1 = 1.0;
		while (a_1 > 1.0)
		{
			precision_1 = precision_1 / 2.;
			a_1 = precision_1 + 1.0;
			i_1++;
		}
		printf("double ����� ����� �� 2: %d ", i_1);
		printf("double �������� ����: %le\n", precision_1);


		i_2 = 0;
		precision_2 = 0;
		a_2 = 1.1;
		precision_2 = 1.0;
		while (a_2 > 1.0)
		{
			precision_2 = precision_2 / 2.;
			a_2 = precision_2 + 1.0;
			i_2++;
		}
		printf("long double ����� ����� �� 2: %d ", i_2);
		printf("long double �������� ����: %Le\n", precision_2);

		//------------------------------
		i = 0;
		precision = 0;
		a = 1.1;
		precision = 1.0;
		do
		{
			precision = precision / 2.;
			a = precision + 1.0;
			i++;
		} while (a > 1.0);
		{

		}
		printf("\n\nDO WHILE");
		printf("\nfloat ����� ����� �� 2: %d ", i);
		printf("float�������� ����: %e\n", precision);


		i_1 = 0;
		precision_1 = 0;
		a_1 = 1.1;
		precision_1 = 1.0;
		do
		{
			precision_1 = precision_1 / 2.;
			a_1 = precision_1 + 1.0;
			i_1++;
		} while (a_1 > 1.0);
		{

		}
		printf("double ����� ����� �� 2: %d ", i_1);
		printf("double �������� ����: %le\n", precision_1);


		i_2 = 0;
		precision_2 = 0;
		a_2 = 1.1;
		precision_2 = 1.0;
		do
		{
			precision_2 = precision_2 / 2.;
			a_2 = precision_2 + 1.0;
			i_2++;
		} while (a_2 > 1.0);
		{

		}
		printf("long double ����� ����� �� 2: %d ", i_2);
		printf("long double �������� ����: %Le\n", precision_2);
	}
