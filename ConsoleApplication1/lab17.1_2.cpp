#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void push(int i);
int pop(void);
int* tos, * p1, stack[SIZE];
int main(void)
{
	int value;
	tos = stack; /* tos посилається на основу стеку */
	p1 = stack; /* ініціалізація р1 */
	do {
		printf("Vvedit znachennya: ");
		scanf("%d", &value);
		if (value != 0) push(value);
		else printf("Znachennya na vershuni rivne %d\n", pop());
	} while (value != -1);
	return 0;
}
void push(int i)
{
	p1++;
	if (p1 == (tos + SIZE)) {
		printf("Perepovnennya steka.\n");
		exit(1);
	}
	*p1 = i;
}
int pop(void)
{
	if (p1 == tos) {
		printf("Stek pyctuy.\n");
		exit(1);
	}
	p1--;
	return *(p1 + 1);
}
