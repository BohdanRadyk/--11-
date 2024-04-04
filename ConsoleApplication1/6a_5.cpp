#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int value;
	int price;
	printf("Enter quantity>>\n");
	scanf("%d", &value);
	printf("Enter price>>\n\n");
	scanf("%d", &price);
	printf("_______________________\n");
	printf("|Numeros    |Prise    |\n");
	for (int i = 1; i <= value; i++)
	{
		printf("|%-11d|%-9d|\n", i, i * price);
	}
	printf("_______________________");
}
