#define _CRT_SECURE_NO_WARNINGS
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include <stdlib.h>  
#include <stdio.h>
#include <windows.h> 

void moveBall() {
    int gd = DETECT, gm;
    char a[] = " ";
    initgraph(&gd, &gm, a);

    int x = 50, y = 50;
    int radius = 20;
    int dx = 2, dy = 2;

    while (!GetAsyncKeyState(VK_ESCAPE)) {
        cleardevice();


        setcolor(RED);
        fillellipse(x, y, radius, radius);


        x += dx;
        y += dy;


        if (x <= radius || x >= getmaxx() - radius) {
            dx = -dx;
        }
        if (y <= radius || y >= getmaxy() - radius) {
            dy = -dy;
        }

        delay(10);
    }

    closegraph();
}

int main() {
    moveBall();
    return 0;
}
