/* ������� ������������ ����� �� ��������� ������� fscanf(). */ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <stdio.h> 
int main() { 
	int f1, f2, f3, f4, f5; 
	FILE * fp; 
	fp = fopen("sample.txt", "r"); /*³������� ����� � ����� �������*/ /*������� � ����� */ 
	fscanf(fp, "%d\n%d\n%d\n%d\n%d\n", & f1, & f2, & f3, & f4, & f5); 
	printf("The values are %d, %d, %d, %d, %d \n.", f1, f2, f3, f4, f5); 
	fclose(fp); /* �������� ����� fp*/ }