#include <stdio.h>
int main(void)
{
	int t;
	for (t = 0; t <= 100; t++) {
		printf("%d ", t);
		if (t == 100)
		{
			break;
		}
	}
	return 0;
}