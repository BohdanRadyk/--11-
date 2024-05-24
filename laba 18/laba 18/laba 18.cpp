#include <stdio.h>
#include <stdlib.h>

//int main()
/*
{
	int a[10];
	a[0] = 0;
	
	printf("%d\n", *a + 1 - *a + 3);
	printf("%d\n", (*a + 1) - (*a + 3));
	printf("%d\n", *a + 1 + *a + 3);
	printf("%d\n", (*a + 1) + (*a + 3));
	printf("%d\n", a[2]);
}
*/

struct Worker
{
	char Name[50];
	double mass;
	double height;
	int age;
};



int main()
{
	Worker person[10];
	int n;
	printf("Kilkict robitnikiv:");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Vvedit imya: ");
		scanf_s("%49s", person[i].Name, sizeof(person[i].Name));
		printf("Vvedit vagu: ");
		scanf_s("%lf", &person[i].mass);
		printf("Vvedit zrist: ");
		scanf_s("%lf", &person[i].height);
		printf("Vvedit vik: ");
		scanf_s("%d", &person[i].age);
	}

	for (int i = 0; i < n; i++)
	{
		printf("Pracivnuk %s \n", person[i].Name);
		printf("Vaga: %3.2lf \n", person[i].mass);
		printf("Zrist: %.2lf \n", person[i].height);
		printf("Vik: %d \n", person[i].age);
	}
}

//3
/*
// визначення структури
struct student
{
	char name[30];
	int kurs;
	int age;
};
int main()
{
	// оголошення масиву на 10 структур 
	struct student stud[10];
	int i, n;
	printf("Kilkict studentiv:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Vvedit imya:");
		scanf_s("%s", stud[i].name, sizeof(stud[i].name));//"%29s"
		printf("Vvedit vik:");
		scanf_s("%d", &stud[i].age);
		printf("Vvedit kurs:");
		scanf_s("%d", &stud[i].kurs);
	}
	// Виведення 
	for (i = 0; i < n; i++)
	{
		printf("Student %s\n", stud[i].name);
		printf("Kurs %d\n", stud[i].kurs);
		printf("Vik %d\n", stud[i].age);
	}
}
*/
//2
/*
// визначення структури
struct student
{
	char name[30];
	int kurs;
	int age;
};
int main()
{
	// оголошення змінної stud1 типу struct student
	struct student stud1;
	printf("Vvedit imya:");
	gets_s(stud1.name);
	printf("Vvedit vik:");
	scanf_s("%d", &stud1.age);
	printf("Vvedit kyrs:");
	scanf_s("%d", &stud1.kurs);
	printf("Student %s\n", stud1.name);
	printf("Kyrs %d\n", stud1.kurs);
	printf("Vik %d\n", stud1.age);

}
*/
//1
/*
int main(void)
{
	struct {
		int a;
		int b;
	} x, y;
	x.a = 10;
	y = x; // присвоювання одної структури другій 
	printf("%d", y.a);
	return 0;
}
*/