#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h> 
//a
/*
int main() 
{ 
	FILE *in; //Опис вказівника на файл 
	int ch; 
	if ((in = fopen("proba", "r")) != NULL) // Відкривається файл для читання, перевіряється чи він існує. Вказівник in тепер посилається на структуру FILE, що пов’язана із proba. 
	{
	    while ((ch=getc(in))!=EOF)// Отримується символ із in 
		putc(ch,stdout);// Виведення символа в стандартний потік на екран. 
	    fclose(in); 
    } 
	else
	{
		printf("Файл proba не відкривається \n");
	}
			
}
*/
//б
/*
int main() 
{
	FILE* ff; 
	int base; 
	ff = fopen("sam.txt", " r"); // відкривається файл із іменем sam, який ідентифікується зі вказівником на ff . 
	fscanf( ff, " %d" , &base); // ff вказує на файл із іменем sam 
	fclose(ff); ff = fopen("data", "a"); // доповнення 
	fprintf( ff, "sam is %d.\n", base); // ff вказує на data  
	fclose(ff); 
}
*/
//в
/*
#define LINE 80
int main()
{
	FILE* ff; 
	char string[LINE]; 
	ff = fopen("opus.txt", "r"); 
	while (fgets(string, LINE, ff) != NULL) 
		puts(string);
	fclose(ff);
}
*/
//г
/*
//Приклад читання форматованих даних з файлу "C:\\temp\\sample.txt": 
// Читання форматованих даних за допомогою функції fscanf(). 
int main() 
{ 
	int f1, f2, f3, f4, f5; 
	FILE * fp; 
	fp = fopen("sample.txt", "r"); //Відкриття файлу в режимі читання 
	//Читання з файлу  
	fscanf(fp, "%d\n%d\n%d\n%d\n%d\n", & f1, & f2, & f3, & f4, & f5); 
	printf("The values are %d, %d, %d, %d, %d \n.", f1, f2, f3, f4, f5); 
	fclose(fp); // Закриття файлу fp
}
*/
// 3 запис
/*
int main () 
{ 
	FILE *pf; int k; 
	if ((pf = fopen ("proba.txt", "w")) == NULL) 
	{ 
		perror("proba.txt");
		return 1; 
	} 
	for (k = 0; k <= 5; k++) 
		{
		fprintf(pf, " % d % d\n", k, k * k * k * k);
		}
	fclose(pf); 
	return 0; 
} 
*/

// Читання даних із файлу proba.txt 
/*
int main() 
{ 
	FILE * pf; 
	int n, nn, l; 
	if ((pf = fopen("proba.txt", "r")) == NULL)
	{ 
		perror("proba.txt");
		return 1; 
	} 
	for (l = 0; l <= 5; l++)
	{
		fscanf(pf, " %d %d\n", &n, &nn);
		printf("%d %d\n", n, nn);
	}
	fclose(pf); 
	return 0; 
}
*/

int main()
{
	FILE* pf;
	if ((pf = fopen("ex_4.txt","w")) == NULL)
	{
		perror("ex_4.txt");
		return 1;
	}
	for (int i = 0; i < 12; i++)
	{
		fprintf(pf, "%d\n", i);
	}
	fclose(pf);

	int array[12];

	FILE* pf2;
	if ((pf2 = fopen("ex_4.txt", "r")) == NULL)
	{
		perror("ex_4.txt");
		return 1;
	}
	for (int i = 0; i < 12; i++)
	{
		fscanf(pf2, "%d\n", &array[i]);
	}
	fclose(pf2);
	for (int i = 0; i < 12; i++)
	{
		printf("%d ", array[i]);
	}
}
