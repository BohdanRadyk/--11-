#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // magic number only v3
    /*
    int magic;// magic number
    int guess;// player number
    magic = rand();// generate random number
    printf("add number\n");
    scanf_s("%d", &guess);
    if (guess == magic)
    {
        printf("viner");
        printf("magic number %d\n",magic);
    }
    else
    {
        printf("loser");
        if (guess > magic)
        {
            printf("your numbet to big");
        }
        else
        {
            printf("your numbet to small");
        }
    }
    */
    // goto
    /*
    int t;

    for (t = 0; t < 100; t++)
    {
        printf("%d ", t);
        if (t == 10)
        {
            break;
        }
    }
    */
    // number of spase
    /*
    char s[80], *str;
    int space;
    printf("add simbols\n");
    gets_s(s);
    str = s;
    for (space = 0; *str; str++)
    {
        if (*str != ' ')
        {
            continue;
        }
        space++;
    }

    printf("%d space\n", space);
    */
    // 3
    /*
    int a = 2, b = 0, c = 1;
    printf("\n\n");
    if (a > 0 && b < -3)
    {
        c = b * b / a;
    }
    printf("c = %d\n", c);//c=1
    a = ++c / a + a % c;
    b += c * c;
    if (a < b || a < 0)
    {
        c *= a;
        printf("c = %d\n", c);
    }
    else if (c++ == 2)
    {
        printf("c = %d\n", c);
    }
    if (b < a && a == 2)
    {
        c = 2 * a + 1;
    }
    else
    {
        c = (b--) + a;
        a = 0;
    }
    printf("c = %d\n", c);
    a = b = 2;
    if (c >= 3)
    {
        if (a < 0 || a > c)
        {
            c = 0;
        }
    }
    else 
    { 
        a = 1; 
        c = 7; 
        printf("c = %d\n", c); 
    }
    if (c > 0 && c < 10)
    {
        if (a > 0)
        {
            printf("c = %d\n", c++);

        } /*c=7
    }
    else
    {
        c = 10;
    }

    if (c <= 5) 
    { 
        if ((a = b + 1) > 2)
        {
            c %= 2;
        }
    }

    printf("c = %d\n", c);

    /*c=8

    a = 3; 
    b = -1;

    if (b > 0)
    {
        c = 1;
    }
    else
    {
        if (b < -10)
        {
            c = -1;
            printf("c = %d\n", c);
        }
        else
        {
            if (b <= -3)
            {
                c = 2;
            }
            else
            {
                c = b * b + 10; printf("c = %d\n", c);
            }
        }
    }
    

   
    */
    // 4 калькулятор
    
    float a, b, c;
    char operation;

    start:

    printf("add number a: ");
    scanf_s("%f", &a);
    
    printf("add number b: ");
    scanf_s("%f", &b);
    
    
    printf("add operation:");
    scanf_s(" %c", &operation);

    if (operation == '+')
    {
        c = a + b;
        printf("a + b = %f\n", c);
    }
    else if (operation == '-')
    {
        c = a - b;
        printf("a - b = %f\n", c);
    }
    else if (operation == '*')
    {
        c = a * b;
        printf("a * b = %f\n", c);
    }
    else if (operation == '/')
    {
        if (b != 0)
        {
            c = a / b;
            printf("a / b = %f\n", c);
        }
        else
        {
            printf("you can`t divid on 0\n");
        }
    }
    else
    {
        printf("incorect operation\n");
    }
    goto start;
    
}