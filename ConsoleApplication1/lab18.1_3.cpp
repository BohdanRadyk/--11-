#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* визначення структури*/
struct student
{
	char name[30];
	int kurs;
	int age;
};
int main()
{
	/* оголошення масиву на 10 структур */
	struct student stud[10];
	int i, n;
	printf("Kilkict studentiv:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Vvedit imya:");
		scanf("%s", stud[i].name);
		printf("Vvedit vik:");
		scanf("%d", &stud[i].age);
		printf("Vvedit kurs:");
		scanf("%d", &stud[i].kurs);
	}
	/* Виведення */
	for (i = 0; i < n; i++)
	{
		printf("Student %s\n", stud[i].name);
		printf("Kurs %d\n", stud[i].kurs);
		printf("Vik %d\n", stud[i].age);
	}
}