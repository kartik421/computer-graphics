#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawEllipse(int xc, int yc, int rx, int ry) {
    float x, y,angle;
    for (angle = 0; angle <= 360; angle += 0.01) {
	x = xc + rx * cos(angle);
	y = yc + ry * sin(angle);
	putpixel(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm,xc,yc,rx,ry;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

   // int xc, yc, rx, ry;

    // Input center and radii of the ellipse
    printf("Enter the center of the ellipse (x y): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the major and minor radii (rx ry): ");
    scanf("%d %d", &rx, &ry);

    // Draw the ellipse
    drawEllipse(xc, yc, rx, ry);

    getch();
    closegraph();
    return 0;
}