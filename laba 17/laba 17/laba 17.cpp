#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void push(int i);
int pop(void);
int* tos, * p1, stack[SIZE];

int main()
{
    
    int value;

    tos = stack; // tos посилається на основу стеку  
    p1 = stack; // ініціалізація р1 

    do 
    {

        printf("Vvedit znachennya: ");

        scanf_s("%d", &value);

        if (value != 0) push(value);

        else printf("Znachennya na vershuni rivne %d\n", pop());

    } while (value != -1);
    

    //
    /*
    int x = 99;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;
    printf("%d | %d\n", *p1, *p2);
    printf("%d | %d\n", p1, p2);
    */
}

void push(int i)
{

    p1++;

    if (p1 == (tos + SIZE)) 
    {

        printf("Perepovnennya steka.\n");

        exit(1);

    }

    *p1 = i;

}


int pop(void)
{

    if (p1 == tos)
    {

        printf("Stek pyctuy.\n");

        exit(1);

    }

    p1--;
    return *(p1 + 1);
}