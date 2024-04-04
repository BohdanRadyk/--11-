#define STOP "*"
#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	ch = getchar();
	ml:if (ch != *STOP)
	{
		putchar(ch);
		ch = getchar();
		goto ml;
	}
}