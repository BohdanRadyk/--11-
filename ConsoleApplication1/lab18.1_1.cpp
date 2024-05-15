#include <stdio.h>
int main(void)
{
	struct {
		int a;
		int b;
	} x, y;
	x.a = 10;
	y = x; /* присвоювання одної структури другій */
	printf("%d", y.a);
	return 0;
}
