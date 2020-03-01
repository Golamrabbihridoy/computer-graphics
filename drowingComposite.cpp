#include <graphics.h>
int main(){
    int gd =DETECT,gm=DETECT;
    initgraph(&gd, &gm,"");
   //floodfill(300, 200,LIGHTGRAY);
    setcolor(BLUE);
    circle(300, 200, 100);
    int arr[100] ={300,220,300,420,500,420,500,220,300,220};
    setcolor(GREEN);
    line(300,220,300,420);
    line(300,420,500,420);
    line(500,420,500,220);
    line(500,220,300,220);
    //drawpoly(5,arr);
    int arr2[100]={130,200,270,200,200,10,130,200};
    setcolor(RED);
    drawpoly(4, arr2);
    getch();
    closegraph();
    return 0;
}

