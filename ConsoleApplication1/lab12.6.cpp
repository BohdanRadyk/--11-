#include<stdio.h>


int main()
{
	size_t zerno=1;
	for (size_t i = 0; i < 64; i++)
	{
		zerno *= 2;
		printf("zerno:%zu \n", zerno);
		
	}
	
}