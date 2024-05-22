#define _CRT_SECURE_NO_WARNINGS
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include <math.h>
#include <stdio.h>
#include <windows.h> 

#define MAX_INPUT_LEN 100


bool isMouseClickedOnButton(int mouseX, int mouseY, int left, int top, int right, int bottom) {
    return (mouseX >= left && mouseX <= right && mouseY >= top && mouseY <= bottom);
}

int left = 10, top = 12, right = 100, bottom = 50;
int left1 = 110, top1 = 12, right1 = 200, bottom1 = 50;
int left2 = 210, top2 = 12, right2 = 300, bottom2 = 50;
char input[MAX_INPUT_LEN] = "";
int inputIndex = 0;
int font = 0;
int size = 1;
int color = 1;

void xz() {
    settextstyle(1, HORIZ_DIR, 1);
    setbkcolor(WHITE);
    cleardevice();


    setcolor(BLACK);
    rectangle(left, top, right, bottom);
    rectangle(left1, top1, right1, bottom1);
    rectangle(left2, top2, right2, bottom2);


    char buttonText[] = "Size";
    char buttonText1[] = "Style";
    char buttonText2[] = "Color";
    outtextxy(left + 15, top + 15, buttonText);
    outtextxy(left1 + 15, top1 + 15, buttonText1);
    outtextxy(left2 + 15, top2 + 15, buttonText2);
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    printf("Enter the text to display: ");
    fgets(input, MAX_INPUT_LEN, stdin);


    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    initwindow(600, 400);
    xz();

    while (1) {

        if (ismouseclick(WM_LBUTTONDOWN)) {
            int x, y;
            getmouseclick(WM_LBUTTONDOWN, x, y);
            if (isMouseClickedOnButton(x, y, left, top, right, bottom)) {
                size = (size % 20) + 5;
                xz();
                setcolor(color);
                settextstyle(font, HORIZ_DIR, size);
                outtextxy(10, 60, input);
            }
            else if (isMouseClickedOnButton(x, y, left1, top1, right1, bottom1)) {
                font = (font + 1) % 10;
                xz();
                setcolor(color);
                settextstyle(font, HORIZ_DIR, size);
                outtextxy(10, 80, input);
                delay(10);
            }
            else if (isMouseClickedOnButton(x, y, left2, top2, right2, bottom2)) {
                color = (color + 1) % 16;
                xz();
                setcolor(color);
                settextstyle(font, HORIZ_DIR, size);
                outtextxy(10, 80, input);
                delay(10);
            }
        }
        delay(10);
    }

    closegraph();
    return 0;
}
