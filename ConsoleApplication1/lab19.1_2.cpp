#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main( ) 
{ 
	FILE *ff; 
	int base; 
	ff = fopen("sam.txt" , " r"); // ����������� ���� �� ������ sam, ���� �������������� � ���������� �� ff . 
	fscanf( ff, " %d" , &base); // ff ����� �� ���� �� ������ sam fclose(ff);
	ff = fopen("data.txt", "a"); // ���������� 
	fprintf( ff, "sam is %d.\n", base); //'* ff ����� �� data */ 
	fclose(ff); 
}