#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;
void b_line(int x1, int y1, int x2, int y2){

   int m_new = 2 * (y2 - y1);
   int slope_error_new = m_new - (x2 - x1);
   for (int x = x1, y = y1; x <= x2; x++)
   {
      cout << "(" << x << "," << y << ")\n";
       putpixel(x,y,RED);
      // Add slope to increment angle formed
      slope_error_new += m_new;

      // Slope error reached limit, time to
      // increment y and update slope error.
      if (slope_error_new >= 0)
      {
         y++;
         slope_error_new  -= 2 * (x2 - x1);
      }
   }
}
int main(){
    int gd=DETECT, gm=DETECT;
    initgraph(&gd,&gm,"");
    b_line(30, 50, 470, 150);
    getch();
    closegraph();
    return 0;
}
