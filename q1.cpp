#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void drawVertical(int x, int y, int len){
    for (int i = 0; i <= len; i++){
        putpixel(x,i + y, WHITE);
    }
}

void drawMidpointCircleC(int x_center, int y_center, int radius) {
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y) {
        // putpixel(x_center + x, y_center + y, WHITE);
        putpixel(x_center - x, y_center + y, WHITE);
        // putpixel(x_center + x, y_center - y, WHITE);
        putpixel(x_center - x, y_center - y, WHITE);
        // putpixel(x_center + y, y_center + x, WHITE);
        putpixel(x_center - y, y_center + x, WHITE);
        // putpixel(x_center + y, y_center - x, WHITE);
        putpixel(x_center - y, y_center - x, WHITE);

        if (err <= 0) {
            y += 1; 
            err += 2*y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2*x + 1;
        }

        // delay(100);
    }
}
void drawMidpointCircleUltaC(int x_center, int y_center, int radius) {
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y) {
        putpixel(x_center + x, y_center + y, WHITE);
        // putpixel(x_center - x, y_center + y, WHITE);
        putpixel(x_center + x, y_center - y, WHITE);
        // putpixel(x_center - x, y_center - y, WHITE);
        putpixel(x_center + y, y_center + x, WHITE);
        // putpixel(x_center - y, y_center + x, WHITE);
        putpixel(x_center + y, y_center - x, WHITE);
        // putpixel(x_center - y, y_center - x, WHITE);

        if (err <= 0) {
            y += 1; 
            err += 2*y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2*x + 1;
        }

        // delay(100);
    }
}
void drawMidpointCircleU(int x_center, int y_center, int radius) {
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y) {
        putpixel(x_center + x, y_center + y, WHITE);
        putpixel(x_center - x, y_center + y, WHITE);
        // putpixel(x_center + x, y_center - y, WHITE);
        // putpixel(x_center - x, y_center - y, WHITE);
        putpixel(x_center + y, y_center + x, WHITE);
        putpixel(x_center - y, y_center + x, WHITE);
        // putpixel(x_center + y, y_center - x, WHITE);
        // putpixel(x_center - y, y_center - x, WHITE);

        if (err <= 0) {
            y += 1; 
            err += 2*y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2*x + 1;
        }

        // delay(100);
    }
}

void drawMidpointCircleUltaU(int x_center, int y_center, int radius) {
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y) {
        // putpixel(x_center + x, y_center + y, WHITE);
        // putpixel(x_center - x, y_center + y, WHITE);
        putpixel(x_center + x, y_center - y, WHITE);
        putpixel(x_center - x, y_center - y, WHITE);
        // putpixel(x_center + y, y_center + x, WHITE);
        // putpixel(x_center - y, y_center + x, WHITE);
        putpixel(x_center + y, y_center - x, WHITE);
        putpixel(x_center - y, y_center - x, WHITE);

        if (err <= 0) {
            y += 1; 
            err += 2*y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2*x + 1;
        }

        // delay(100);
    }
}

void drawMidpointCircleComplete(int x_center, int y_center, int radius) {
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y) {
        putpixel(x_center + x, y_center + y, WHITE);
        putpixel(x_center - x, y_center + y, WHITE);
        putpixel(x_center + x, y_center - y, WHITE);
        putpixel(x_center - x, y_center - y, WHITE);
        putpixel(x_center + y, y_center + x, WHITE);
        putpixel(x_center - y, y_center + x, WHITE);
        putpixel(x_center + y, y_center - x, WHITE);
        putpixel(x_center - y, y_center - x, WHITE);

        if (err <= 0) {
            y += 1; 
            err += 2*y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2*x + 1;
        }

        // delay(100);
    }
}

int main(){
    int gm = DETECT, gd;
    initgraph(&gd, &gm, NULL);
    initwindow(1366, 768);
    drawVertical(100, 50, 50);
    drawMidpointCircleC(100, 77, 17);
    drawMidpointCircleUltaU(88, 50, 12);
    drawMidpointCircleC(150,62,12);
    drawMidpointCircleUltaC(150,87,12);
    drawVertical(200, 50, 50);
    drawMidpointCircleUltaU(220, 100, 20);
    drawVertical(270, 75, 25);
    drawMidpointCircleComplete(270,60,7);
    drawMidpointCircleC(320,62,12);
    drawMidpointCircleUltaC(320,87,12);
    getch();
    closegraph();
}
