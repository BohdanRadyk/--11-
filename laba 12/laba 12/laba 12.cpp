#define _USE_MATH_DEFINES

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <cmath>
#include<conio.h>
#include <Windows.h>

unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //1
    /*
    int x;
    for (x = 1; x <= 100; x++)
    {
        printf("% d", x);
    }
    */
    //2
    /*
    int i = 2;
    while (i <= 1024)
    {
        i = i * 2;
        printf("%d\n", i);
    }
    */
    //3
    /*
    int j = 0, k = 0;
    while (j < 5)
    {
        k += 10;
        j++;
    }
    printf("k=%d\n", k);
    */
    //4
    /*
    int a = 2, b = 10, c;
    do
    {
        b = b + a; c = 10 * a; a++;
    } while (a < 5);
    printf("\nb=%d c=%d a=%d", b, c, a);
    */
    //5
    /*
    int magic;
    int guess;
    magic = rand()%10;
    printf("vgaday chuslo:");
    scanf_s("%d", &guess);
    if (guess == magic) {
        printf("**virno**");
        printf("magichne chuslo rivne %d", magic);
    }
    else {
        printf("nevirno\n");
        while (guess != magic) {
            printf("vgaday chuslo:");
            scanf_s("%d", &guess);
            printf("nevirno\n");
        }
    }
    */
    //6
    /*
    int magic;
    int guess;
    int m = 1;
    magic = rand()%10;
    printf("vgaday chuslo:");
    scanf_s("%d", &guess);
    if (guess == magic) {
        printf("**virno**");
        printf("magichne chuslo rivne %d", magic);
    }
    else {
        printf("nevirno\n");
        printf("m=%d\n", m);
        while (guess != magic) {
            m++;
            printf("vgaday chuslo:");
            scanf_s("%d", &guess);
            printf("nevirno\n");
            printf("m=%d\n", m);
        }
    }
    */
    //7
    /*
    int magic;
    int guess;
    int m = 1; //к≥льк≥сть спроб
    magic = rand();
    printf("vgaday chuslo:");
    scanf_s("%d", &guess);
    if (guess == magic) {
        printf("**virno**");
        printf("magichne chuslo rivne %d", magic);
    }
    else {
        printf("nevirno\n");
        printf("m=%d\n", m);
        while (guess != magic) {
            m++;
            printf("vgaday chuslo:");
            scanf_s("%d", &guess);
            printf("nevirno\n");
            printf("m=%d\n", m);
            if (m > 9) {
                printf("magic=%d\n", magic);
                break;
            }
        }
    }
    */
    // Celsius and Fahrengeit
    // C=(5/9)*(F-32) 
    /*
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("\n\nCelsius       Fahrengeit\n");
    while (fahr <= upper)
    {
        
        celsius = 5 * (fahr - 32) / 9;
        printf("%10d\t%8d\n", fahr, celsius);
        fahr = fahr + step;
    }
    */
    //4
    /*
    int n, a = 1;
    printf("catheter: ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
        a++;
    }
    */
    //6
    /*
    size_t x = 1;
    for (int i = 1; i < 70; i++)
    {
        x *= 2;
        printf("%d %zu\n", i, x);
    }
    */
    //7
    /*
    double x, y, z;
    
    for (int i = 1; i < 21; i++)
    {
        x = sqrt(i);
        y = cbrt(i);
        z = pow(i, 0.25);
        printf("|%2d|%-9.4lf|%-9.4lf|%-9.4lf|\n", i, x, y, z);
    }
    */
    //8
    /*
    int x; 
    double y,c;
    for (int i = 0; i < 31; i++)
    {
        c = pow(i, 2);
        y = c * exp(- c / 100) * sin(((2 * M_PI) / 32) * i);
        printf("%.4lf\n", y);
    }
    */
    //9
    /*
    int i = 0; // ≥ Ц л≥чильник ≥терац≥й
    float precision, a; // а Ц допом≥жна зм≥нна
    precision = 1.0; // precision Ц обчислювана точн≥сть в≥дносно числа 1.0
m:  
    precision = precision / 2.;
    a = precision + 1.0;
    i++;
    if (a > 1.0) goto m;
    printf("\n число д≥лень на 2: %6d\n", i);
    printf("машинний нуль: %e\n ", precision);

    printf("\n");

    i = 0;
    precision = 1.0;
    a = 2;

   

    while (a > 1.0)
    {
        precision = precision / 2.;
        a = precision + 1.0;
        i++;
    }

    printf("\n число д≥лень на 2: %6d\n", i);
    printf("машинний нуль: %e\n ", precision);

    printf("\n");

    i = 0;
    precision = 1.0;
    a = 1;

    do
    {
        precision = precision / 2.;
        a = precision + 1.0;
        i++;
    } while (a>1.0);

    printf("\n число д≥лень на 2: %6d\n", i);
    printf("машинний нуль: %e\n ", precision);

    printf("\n");

    i = 0;
    precision = 1.0;
    a = 2;

    for ( i = 0; a > 1.0; i++)
    {
        precision = precision / 2.;
        a = precision + 1.0;
    }

    printf("\n число д≥лень на 2: %6d\n", i);
    printf("машинний нуль: %e\n ", precision);

    printf("\n");
    */
    //10
    /*
    int N = 10;
    double x = 0.1, S1 = 0, S2 = 0, P = 1;

    for (int i = 1; i < N; i++)
    {
        S1 = S1 + pow(sin(x), i);
        S2 = S2 + 1 / pow(x, i);
    }

    for (int i = 0; i < N+1; i++)
    {
        P = P * (0.1 - i);
        printf("P = %lf\n", P);
        printf("i %d\n",i);
    }

    printf("S1 = %lf\n", S1);
    printf("S2 = %lf\n", S2);
    printf("P = %lf\n", P);
    */
    //11
    
    double x, y = 0, a = 0.00001,div,b;
    int n = 0;

    

    printf("add x = ");
    scanf_s("%lf", &x);

    b = sin(x);

    if (0 <= x <= M_PI/2)
    {
        do
        {
            y = y + pow(-1, n) * (pow(x, 2 * n + 1) / factorial(2 * n + 1));
            div = abs(y) - abs(b);
            n++;
        } while (abs(div) > a);
    }

    printf("sin(x) = %lf\n", b);
    printf("y = %lf\n", y);
    printf("n = %d\n", n);

    printf("a1 = %lf\n", y - b);
    printf("div = %lf\n", div);
    
}

