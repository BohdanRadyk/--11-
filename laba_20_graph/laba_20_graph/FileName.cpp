#define _USE_MATH_DEFINES

#include "graphics.h" 
#pragma comment(lib,"graphics.lib")
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
//#include <conio.h> 
#include <cmath>

//5
// ������� ��� ����������� ���������� ������
void initGraphics() {
    int X = 1000, Y = 400;
    initwindow(X, Y);
}

// ������� ��� ��������� ���
void drawBall(int x, int y, int radius, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

// ������� ��� ���� ��� ���� �������
void moveBallFromLeftToRight(int startY, int radius, int ballColor, int bgColor, int delayTime) {
    int x = radius;  // �������� ���������� ��� (����)
    int y = startY;  // ������, �� ��� �������� ����

    while (x < getmaxx() - radius) {
        // �������� ����
        drawBall(x, y, radius, ballColor);
        delay(delayTime);  // �������� ��� ����������� ����

        // �������� ����, ����������� �� �������� ���
        drawBall(x, y, radius, bgColor);

        // ������� ��� ��������
        x += 5;
    }
}

// ������� �������
int main() {
    // ����������� ���������� ������
    initGraphics();

    int startY = getmaxy() / 2;  // ��������� ������ ��� (����� ������ �� Y)
    int radius = 20;             // ����� ���
    int ballColor = WHITE;       // ���� ���
    int bgColor = BLACK;         // ���� ���
    int delayTime = 50;          // �������� ��� ����������� ����

    // ��������� ���� ��� ���� �������
    moveBallFromLeftToRight(startY, radius, ballColor, bgColor, delayTime);

    getch();  // ���������� ���������� ������ ����� ����������� ��������
    closegraph();  // �������� ���������� ������
    return 0;
}
//4
/*
// ������� ��� ����������� ���������� ������
void initGraphics() {
    int X = 1000, Y = 400;
    initwindow(X, Y);
}

// ������� ��� ��������� ���
void drawBall(int x, int y, int radius, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

// ������� �������
int main() 
{
    // ����������� ���������� ������
    initGraphics();

    int centerX = getmaxx() / 2;  // ����� ������ �� X
    int centerY = getmaxy() / 2;  // ����� ������ �� Y
    int radius = 20;              // ����� ���
    int orbitRadius = 100;        // ����� �����
    int angle = 0;                // ���������� ���
    int bgColor = BLACK;          // ���� ���
    int ballColor = WHITE;        // ���� ���
    int delayTime = 50;           // �������� ��� ����������� ����

    

    while (!kbhit()) {            // ������������ �� ���������� ������
        // ���������� ��������� ��� �� ����
        int x = centerX + orbitRadius * cos(angle * M_PI / 180);
        int y = centerY + orbitRadius * sin(angle * M_PI / 180);

        // �������� ����
        drawBall(x, y, radius, ballColor);
        delay(delayTime);         // �������� ��� ����������� ����

        // �������� ����, ����������� �� �������� ���
        drawBall(x, y, radius, bgColor);

        // �������� ��� ��� ���������
        angle = (angle + 5) % 360;
    }

    closegraph();  // �������� ���������� ������
    return 0;
}
*/
//3
/*
// ������� ��� ����������� ���������� ������
void initGraphics() 
{
    int X = 1000, Y = 400;
    initwindow(X, Y);
}

// ������� ��� ��������� ���
void drawBall(int x, int y, int radius, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

// ������� �������
int main() {
    int x = 50, y = 50;       // �������� ���������� ���
    int radius = 20;          // ����� ���
    int dx = 5, dy = 5;       // ������� �� x �� y
    int bgColor = BLACK;      // ���� ���
    int ballColor = WHITE;    // ���� ���

    // ����������� ���������� ������
    initGraphics();

    while (!kbhit()) {        // ������������ �� ���������� ������
        // �������� ����
        drawBall(x, y, radius, ballColor);
        delay(50);            // �������� ��� ����������� ����

        // �������� ����, ����������� �� �������� ���
        drawBall(x, y, radius, bgColor);

        // �������� ���������� ���
        x += dx;
        y += dy;

        // �������� �� �������� � ������� ������ � ���� �������� ����
        if (x <= radius || x >= getmaxx() - radius) {
            dx = -dx;
        }
        if (y <= radius || y >= getmaxy() - radius) {
            dy = -dy;
        }
    }

    closegraph();  // �������� ���������� ������
    return 0;
}
*/

//2
/*
// ������� ��� ����������� ���������� ������
void initGraphics() 
{

    int X = 1000, Y = 400;
    

    initwindow(X, Y);
}

// ������� ��� ������ ������ � ������
void chooseFont(int* font, int* size) {
    printf("vuberit shruft (0-10): ");
    scanf_s("%d", font);
    printf("vuberit hjpvsh shruftu (8-40): ");
    scanf_s("%d", size);
}

// ������� ��� �������� ������ � ���������
void inputText(int font, int size) {
    char text[100];
    int x = 10, y = 10;  // �������� ����������

    settextstyle(font, HORIZ_DIR, size);
    printf("text: ");
    scanf_s("%s", text, sizeof(text));
    outtextxy(x, y, text);
}

// ������� �������
int main() {
    int font, size;

    // ����������� ���������� ������
    initGraphics();

    // ���� ������ �� ������
    chooseFont(&font, &size);

    // �������� �� ���� ������
    inputText(font, size);

    getch();  // ���������� ���������� ������
    closegraph();  // �������� ���������� ������

    return 0;
}
*/

//1
/*
int main() 
{  
	int X = 400, Y = 300;
	int x1 = 0, y1= Y / 2, y2;

	initwindow(X, Y);

	for (double i = 0; i < 3 * M_PI ; i = i + 0.1 )
	{
		y2 = y1 - ceil(sin(i) * 100);// 0.1 100
		
		line(x1, y1, x1, y2);
		x1 = x1 + 3;
	}

	getch();

}
*/