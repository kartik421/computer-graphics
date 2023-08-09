#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void drawCircle(int centerX, int centerY, int radius) {
    int x = 0;
    int y = radius;
    int p = 1 - radius;

    while (x <= y) {
        putpixel(centerX + x, centerY + y, WHITE);
        putpixel(centerX + y, centerY + x, WHITE);
        putpixel(centerX - x, centerY + y, WHITE);
        putpixel(centerX - y, centerY + x, WHITE);
        putpixel(centerX + x, centerY - y, WHITE);
        putpixel(centerX + y, centerY - x, WHITE);
        putpixel(centerX - x, centerY - y, WHITE);
        putpixel(centerX - y, centerY - x, WHITE);

        if (p < 0) {
            p += 2 * x + 3;
        } else {
            p += 2 * (x - y) + 5;
            y--;
        }
        x++;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int centerX, centerY, radius;
    cout << "Enter the center coordinates (x y): ";
    cin >> centerX >> centerY;
    cout << "Enter the radius: ";
    cin >> radius;

    drawCircle(centerX, centerY, radius);

    getch();
    closegraph();
    return 0;
}