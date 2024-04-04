//Підрахунок кількості пробілів 
#include <stdio.h>
int main(void)
{

	char s[1000], * str;
	int space;
	printf("Vvedit riadok: ");
	gets_s(s);
	str = s;
	for (space = 0; *str; str++) {
		if (*str != ' ')
		{
			continue;
		}
		space++;
	}
	printf("%d probiliv\n", space);
	return 0;
}