#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h> 
//a
/*
int main() 
{ 
	FILE *in; //���� ��������� �� ���� 
	int ch; 
	if ((in = fopen("proba", "r")) != NULL) // ³���������� ���� ��� �������, ������������ �� �� ����. �������� in ����� ���������� �� ��������� FILE, �� �������� �� proba. 
	{
	    while ((ch=getc(in))!=EOF)// ���������� ������ �� in 
		putc(ch,stdout);// ��������� ������� � ����������� ���� �� �����. 
	    fclose(in); 
    } 
	else
	{
		printf("���� proba �� ����������� \n");
	}
			
}
*/
//�
/*
int main() 
{
	FILE* ff; 
	int base; 
	ff = fopen("sam.txt", " r"); // ����������� ���� �� ������ sam, ���� �������������� � ���������� �� ff . 
	fscanf( ff, " %d" , &base); // ff ����� �� ���� �� ������ sam 
	fclose(ff); ff = fopen("data", "a"); // ���������� 
	fprintf( ff, "sam is %d.\n", base); // ff ����� �� data  
	fclose(ff); 
}
*/
//�
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
//�
/*
//������� ������� ������������ ����� � ����� "C:\\temp\\sample.txt": 
// ������� ������������ ����� �� ��������� ������� fscanf(). 
int main() 
{ 
	int f1, f2, f3, f4, f5; 
	FILE * fp; 
	fp = fopen("sample.txt", "r"); //³������� ����� � ����� ������� 
	//������� � �����  
	fscanf(fp, "%d\n%d\n%d\n%d\n%d\n", & f1, & f2, & f3, & f4, & f5); 
	printf("The values are %d, %d, %d, %d, %d \n.", f1, f2, f3, f4, f5); 
	fclose(fp); // �������� ����� fp
}
*/
// 3 �����
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

// ������� ����� �� ����� proba.txt 
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
