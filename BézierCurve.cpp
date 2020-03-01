#include <stdio.h>
#include <graphics.h>
#include <math.h>
void bezier (int x[4], int y[4]){
    for (double t = 0.0; t < 1.0; t += 0.0005){
        double xt = pow(1-t, 3) * x[0] + 3 * t * pow(1-t, 2) * x[1] + 3 * pow(t, 2) * (1-t) * x[2] + pow(t, 3) * x[3];
        double yt = pow(1-t, 3) * y[0] + 3 * t * pow(1-t, 2) * y[1] + 3 * pow(t, 2) * (1-t) * y[2] + pow(t, 3) * y[3];
        putpixel(xt, yt, RED);
    }
    for (int i = 0; i < 4; i++){
        putpixel (x[i], y[i],BLUE);
    }
}
int main(){
    int gd = DETECT, gm = DETECT;
    initgraph (&gd, &gm, "");
    floodfill(0,0,LIGHTGRAY);
    setbkcolor(WHITE);
    /* Four control points */
    int x[4], y[4];
    x[0] = 25, y[0] = 100;
    x[1] = 200, y[1] = 150;
    x[2] = 25, y[2] = 50;
    x[3] = 400, y[3] = 100;
    bezier (x, y);
    getch();
    closegraph();
    return 0;
}

