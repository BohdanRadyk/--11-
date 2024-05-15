#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main () 
{
	FILE* pf; int n, nn, l;
	int k; 
	if ((pf = fopen ("proba.txt", "w")) == NULL)
	{ perror("proba.txt");
		return 1; 
	} 
	for (k=0; k<=5; k++) 
		fprintf(pf, " % d % d\n", k, k * k * k * k);
	fclose(pf); 
	

	
	if ((pf = fopen("proba.txt", "r")) == NULL)
	{ perror("proba.txt");
	return 1; 
	} 
	for (l = 0; l <= 5; l++)
	{
		fscanf(pf, "%d %d\n", &n, &nn);
		printf("%d %d\n", n, nn);
	}
	fclose(pf); 
	return 0; }