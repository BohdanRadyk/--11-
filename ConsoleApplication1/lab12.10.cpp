#include <stdio.h>
#include<math.h>
int main()
{
	int N = 10;
	float res;
	float F_res=0;
	for (size_t i = 1; i <= N; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			res=sin(0.1 * i + 0.2 * j);
			F_res += res;
			printf("I=%2d J=%2d RES=%f\n",i,j,res);
			
		}
	}
	printf("Final RES=%f",F_res);
}