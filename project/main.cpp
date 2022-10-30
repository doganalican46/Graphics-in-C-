#include <graphics.h>
  
int main()
{
    int gd = DETECT, gm;
  
    initgraph(&gd, &gm, "");
  
    circle(250,240,50);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(250,240,WHITE);
  
    getch();
  
    closegraph();
}


