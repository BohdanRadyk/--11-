#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct people
{
	char name[40];
	int vaga;
	int rist;
	int vik;
};
void vid(struct people a[], int b)
{
	for (int i = 0; i < b; i++)
	{
		printf("Vvedit imya:");
		scanf("%s", &a[i].name);
		printf("Vvedit vaga:");
		scanf("%d", &a[i].vaga);
		printf("Vvedit rist:");
		scanf("%d", &a[i].rist);
		printf("Vvedit vik:");
		scanf("%d", &a[i].vik);
	}
}
void vuvid(struct people a[],int b)
{
	for (int i = 0; i < b; i++)
	{
		printf("\n\nlyduna %s\n",a[i].name);
		printf("Vaga %d\n",a[i].vaga);
		printf("Rist %d\n",a[i].rist);
		printf("Vik %d\n",a[i].vik);
	}
	
}
int main()
{
	struct people *kartka;
	int a;
	scanf("%d", &a);
	kartka = (struct people*)malloc(a * sizeof(struct people));
	if (kartka == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}
	vid(kartka,a);
	vuvid(kartka, a);

	

}