#define _CRT_SECURE_NO_WARNINGS
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h> 

#define PI 3.14159265

void drawSphere(int xc, int yc, int radius, double angle) {
    int i, j;
    double x, y, z;
    double theta, phi;
    int num_segments = 20;

    cleardevice();

    for (i = 0; i <= num_segments; ++i) {
        theta = i * PI / num_segments;
        for (j = 0; j <= num_segments; ++j) {
            phi = j * 2 * PI / num_segments;

            x = radius * sin(theta) * cos(phi);
            y = radius * sin(theta) * sin(phi);
            z = radius * cos(theta);


            double x_rot = x * cos(angle) - z * sin(angle);
            double z_rot = x * sin(angle) + z * cos(angle);

            putpixel(xc + (int)x_rot, yc + (int)y, WHITE);
        }
    }
}

void rotateSphere() {
    int gd = DETECT, gm;
    char driver[] = "";
    initgraph(&gd, &gm, driver);

    int xc = getmaxx() / 2;
    int yc = getmaxy() / 2;
    int radius = 100;
    double angle = 0.0;
    double angle_increment = 0.05;

    while (!GetAsyncKeyState(VK_ESCAPE)) {
        drawSphere(xc, yc, radius, angle);
        angle += angle_increment;
        delay(50);
    }

    closegraph();
}

int main() {
    rotateSphere();
    return 0;
}
