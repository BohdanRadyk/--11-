#include <stdio.h>
int main(void)
{
	int x = 99;
	int* p1, * p2;
	p1 = &x;
	p2 = p1;
	/* ���� �������� � ��� ���� */
	printf("Znachennya po adresi plip2: %d %d\n", *p1, *p2);
	printf("Znachennya vkazivnukiv plip2: %p %p", p1, p2);
	return 0;
}
