#include <stdio.h>

int main()
{
	printf("/%d/\n", 557);
	printf("/%10d/\n", 557);
	printf("/%-10d/\n\n", 557);

	printf("/%8d/\n", 21949);
	printf("/%8d/\n", -1611);
	printf("/%8d/\n", -8380);
	printf("/%8d/\n\n", 2143);

	printf("/%f/\n", 6543.12);
	printf("/%e/\n", 6543.12);
	printf("/%4.2f/\n", 6543.12);
	printf("/%3.1f/\n", 6543.12);
	printf("/%10.3f/\n", 6543.12);
	printf("/%10.3e/\n", 6543.12);

}