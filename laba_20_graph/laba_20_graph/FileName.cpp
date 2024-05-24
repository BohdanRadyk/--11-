#define _USE_MATH_DEFINES

#include "graphics.h" 
#pragma comment(lib,"graphics.lib")
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
//#include <conio.h> 
#include <cmath>

//5
// Функція для ініціалізації графічного режиму
void initGraphics() {
    int X = 1000, Y = 400;
    initwindow(X, Y);
}

// Функція для малювання кулі
void drawBall(int x, int y, int radius, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

// Функція для руху кулі зліва направо
void moveBallFromLeftToRight(int startY, int radius, int ballColor, int bgColor, int delayTime) {
    int x = radius;  // Початкові координати кулі (зліва)
    int y = startY;  // Висота, на якій рухається куля

    while (x < getmaxx() - radius) {
        // Малювати кулю
        drawBall(x, y, radius, ballColor);
        delay(delayTime);  // Затримка для уповільнення руху

        // Витирати кулю, замалювавши її кольором тла
        drawBall(x, y, radius, bgColor);

        // Зміщення кулі праворуч
        x += 5;
    }
}

// Головна функція
int main() {
    // Ініціалізація графічного режиму
    initGraphics();

    int startY = getmaxy() / 2;  // Початкова висота кулі (центр екрану по Y)
    int radius = 20;             // Радіус кулі
    int ballColor = WHITE;       // Колір кулі
    int bgColor = BLACK;         // Колір тла
    int delayTime = 50;          // Затримка для уповільнення руху

    // Виконання руху кулі зліва направо
    moveBallFromLeftToRight(startY, radius, ballColor, bgColor, delayTime);

    getch();  // Очікування натискання клавіші перед завершенням програми
    closegraph();  // Закриття графічного режиму
    return 0;
}
//4
/*
// Функція для ініціалізації графічного режиму
void initGraphics() {
    int X = 1000, Y = 400;
    initwindow(X, Y);
}

// Функція для малювання кулі
void drawBall(int x, int y, int radius, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

// Головна функція
int main() 
{
    // Ініціалізація графічного режиму
    initGraphics();

    int centerX = getmaxx() / 2;  // Центр екрану по X
    int centerY = getmaxy() / 2;  // Центр екрану по Y
    int radius = 20;              // Радіус кулі
    int orbitRadius = 100;        // Радіус орбіти
    int angle = 0;                // Початковий кут
    int bgColor = BLACK;          // Колір тла
    int ballColor = WHITE;        // Колір кулі
    int delayTime = 50;           // Затримка для уповільнення руху

    

    while (!kbhit()) {            // Продовжувати до натискання клавіші
        // Обчислення координат кулі на орбіті
        int x = centerX + orbitRadius * cos(angle * M_PI / 180);
        int y = centerY + orbitRadius * sin(angle * M_PI / 180);

        // Малювати кулю
        drawBall(x, y, radius, ballColor);
        delay(delayTime);         // Затримка для уповільнення руху

        // Витирати кулю, замалювавши її кольором тла
        drawBall(x, y, radius, bgColor);

        // Змінювати кут для обертання
        angle = (angle + 5) % 360;
    }

    closegraph();  // Закриття графічного режиму
    return 0;
}
*/
//3
/*
// Функція для ініціалізації графічного режиму
void initGraphics() 
{
    int X = 1000, Y = 400;
    initwindow(X, Y);
}

// Функція для малювання кулі
void drawBall(int x, int y, int radius, int color) {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

// Головна функція
int main() {
    int x = 50, y = 50;       // Початкові координати кулі
    int radius = 20;          // Радіус кулі
    int dx = 5, dy = 5;       // Зміщення по x та y
    int bgColor = BLACK;      // Колір тла
    int ballColor = WHITE;    // Колір кулі

    // Ініціалізація графічного режиму
    initGraphics();

    while (!kbhit()) {        // Продовжувати до натискання клавіші
        // Малювати кулю
        drawBall(x, y, radius, ballColor);
        delay(50);            // Затримка для уповільнення руху

        // Витирати кулю, замалювавши її кольором тла
        drawBall(x, y, radius, bgColor);

        // Змінювати координати кулі
        x += dx;
        y += dy;

        // Перевірка на зіткнення зі стінками екрану і зміна напрямку руху
        if (x <= radius || x >= getmaxx() - radius) {
            dx = -dx;
        }
        if (y <= radius || y >= getmaxy() - radius) {
            dy = -dy;
        }
    }

    closegraph();  // Закриття графічного режиму
    return 0;
}
*/

//2
/*
// Функція для ініціалізації графічного режиму
void initGraphics() 
{

    int X = 1000, Y = 400;
    

    initwindow(X, Y);
}

// Функція для вибору шрифту і розміру
void chooseFont(int* font, int* size) {
    printf("vuberit shruft (0-10): ");
    scanf_s("%d", font);
    printf("vuberit hjpvsh shruftu (8-40): ");
    scanf_s("%d", size);
}

// Функція для введення тексту з клавіатури
void inputText(int font, int size) {
    char text[100];
    int x = 10, y = 10;  // Початкові координати

    settextstyle(font, HORIZ_DIR, size);
    printf("text: ");
    scanf_s("%s", text, sizeof(text));
    outtextxy(x, y, text);
}

// Головна функція
int main() {
    int font, size;

    // Ініціалізація графічного режиму
    initGraphics();

    // Вибір шрифту та розміру
    chooseFont(&font, &size);

    // Введення та вивід тексту
    inputText(font, size);

    getch();  // Очікування натискання клавіші
    closegraph();  // Закриття графічного режиму

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