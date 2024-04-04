#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define Stop '*'

int main()
{
	char ch;
	ch = getchar();
ml:if (ch != Stop)
{
	putchar(ch);
	ch = getchar();
	goto ml;
}
else
{
	Beep(600, 2000);
}

}