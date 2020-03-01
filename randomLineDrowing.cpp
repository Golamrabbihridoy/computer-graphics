#include <graphics.h>
int main() {
    int gd=DETECT, gm=DETECT;
    initgraph(&gd,&gm,"");

    int maxx = getmaxx();
    int maxy = getmaxy();
    int n = rand() % 1000;
    int color;
    for(int i = 0; i < n; i++) {
        color = rand() % 16;
        setcolor(color);
        line(rand() % maxx, rand() % maxy, rand() % maxx, rand() % maxy);
    }
    getch();
    closegraph();
    return 0;
}
