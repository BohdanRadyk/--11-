#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main( ) 
{ 
	FILE *ff; 
	int base; 
	ff = fopen("sam.txt" , " r"); // відкривається файл із іменем sam, який ідентифікується зі вказівником на ff . 
	fscanf( ff, " %d" , &base); // ff вказує на файл із іменем sam fclose(ff);
	ff = fopen("data.txt", "a"); // доповнення 
	fprintf( ff, "sam is %d.\n", base); //'* ff вказує на data */ 
	fclose(ff); 
}