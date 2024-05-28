1)
#include <stdio.h>

int main(void) {
    float var1, var2;
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);

    printf("var1 > var2 дає %d\n", var1 > var2);
    printf("var1 < var2 дає %d\n", var1 < var2);
    printf("var1 == var2 дає %d\n", var1 == var2);
    printf("var1 >= var2 дає %d\n", var1 >= var2);
    printf("var1 <= var2 дає %d\n", var1 <= var2);
    printf("var1 != var2 дає %d\n", var1 != var2);

    // Отримання цілочисельного значення
    int Ivar1 = (int)var1;
    int Ivar2 = (int)var2;
    printf("Ivar1 дає %d\n", Ivar1);
    printf("Ivar2 дає %d\n", Ivar2);

    printf("var1 || var2 дає %d\n", var1 || var2);
    printf("var1 && var2 дає %d\n", var1 && var2);

    return 0;
}
2)

#include <stdio.h>

#define TRUE "ICTИHHA"
#define FALSE "XИBHICTь"

int main(void) {
    float var1, var2;

    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);

    printf("var1 > var2 є %s\n", var1 > var2 ? TRUE : FALSE);
    printf("var1 < var2 є %s\n", var1 < var2 ? TRUE : FALSE);
    printf("var1 == var2 є %s\n", var1 == var2 ? TRUE : FALSE);
    printf("var1 >= var2 є %s\n", var1 >= var2 ? TRUE : FALSE);
    printf("var1 <= var2 є %s\n", var1 <= var2 ? TRUE : FALSE);
    printf("var1 != var2 є %s\n", var1 != var2 ? TRUE : FALSE);
    printf("var1 || var2 є %s\n", var1 || var2 ? TRUE : FALSE);
    printf("var1 && var2 є %s\n", var1 && var2 ? TRUE : FALSE);
    printf("!var1 є %s\n", !var1 ? TRUE : FALSE);
    printf("!var2 є %s\n", !var2 ? TRUE : FALSE);

    return 0;
}

3)
#include <stdio.h>
#include <conio.h>

int main() {
    int a = 0, b = 3, c;
    c = b % 2 || (a >= 0) && (++b / 2 * a) == 0;
    printf("a=%d, c=%d\n", a, c);
    getch();
    return 0;
}

4)
#include <stdio.h>

int main() {
    unsigned int x = 2, y = 1, z = 3, res;
    char chx = 0xAF;

    printf("%u\n", (x & y) | z);

    x = y = z = 2;
    printf("%u\n", x | (y & z));

    x = 3; y = 0; z = 1;
    printf("x^y |~z=%u\n", (x ^ y) | ~z);

    printf("3 | 0^~1=%u\n", x | (y ^ ~z));

    x = 1; y = 2; z = 0;
    printf("1&2 | 0=%u\n", (x & y) | z);

    printf("~1^2&0=%u\n", (~x ^ y) & z);

    printf("2 | 0&1=%u\n", y | (z & x));

    printf("2++&~0 | ~1=%u\n", y++ & ~z | ~x);

    printf("~3 | 1&++0=%u\n", ~y | (x & ++z));

    x = 0xAF; printf("%X\n", x >> 4);
    chx <<= 7; printf("0x=%u\n", chx);

    return 0;
}

5)
#include <stdio.h>

int main() {
    char x = 255, y = 127;

    printf("%u\n", x);  // Corrected format specifier
    printf("%u\n", y);  // Corrected format specifier
    printf("%u\n", x & ~y);  // Corrected format specifier and added missing semi-colon
    y = 127;  // Reassigning y back to 127
    printf("%u\n", x & y);
    y = 128;
    printf("%u\n", x | y);  // Corrected format specifier and added missing semi-colon

    return 0;  // Added return statement
}
