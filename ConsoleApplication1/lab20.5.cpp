#define _CRT_SECURE_NO_WARNINGS
#include "graphics.h"
#pragma comment(lib, "graphics.lib")


void drawBoat(int x, int y) {

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, DARKGRAY);
    int boatBody[] = { x, y, x + 100, y, x + 80, y + 20, x + 20, y + 20, x, y };
    fillpoly(5, boatBody);


    setcolor(BLACK);
    setfillstyle(SOLID_FILL, WHITE);
    int sail[] = { x + 50, y - 50, x + 70, y, x + 30, y, x + 50, y - 50 };
    fillpoly(4, sail);


    line(x + 50, y - 50, x + 50, y);
}

int main() {
    int gd = DETECT, gm;
    char a[] = "";
    initgraph(&gd, &gm, a);

    int x = 0;
    int y = getmaxy() / 2;

    while (!kbhit()) {
        cleardevice();
        drawBoat(x, y);
        x += 5;

        if (x > getmaxx()) {
            x = -100;
        }

        delay(100);
    }

    closegraph();
    return 0;
}
