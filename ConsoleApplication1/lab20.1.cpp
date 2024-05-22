#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include <math.h>
#define PI 3.14
int main()
{
    int a;
    int c = 0;
    initwindow(600, 200);
    setbkcolor(GREEN);
    cleardevice();
    for (float i = 0; i < 3 * PI; i = i + 0.03)
    {

        c = c + 2;
        a = ceil(sin(i) * 100);

        printf("\n%f %d", i, a);
        line(c, 200, c, 100 + a);
    }
    getchar(); // ожидает нажатия Enter
    closegraph();
    return 0;
}