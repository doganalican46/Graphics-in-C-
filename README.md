# Graphics in C++ 

## This repositories created for computer graphics lesson, I will shar all my codes and screenshoots...

### Circle:
      include <graphics.h>
      int main(){
      int gd = DETECT, gm;

      initgraph(&gd, &gm, "");

      circle(250,240,50);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(250,240,WHITE);

      getch();

      closegraph();
      } 

![image](https://user-images.githubusercontent.com/76850300/198901157-125b0b7e-9f27-4249-a37d-b25638fa8a9a.png)
___________________________________________________________________________________
### Recrangle:

      #include <graphics.h>
  
      int main()
      {
            int gd = DETECT, gm;
  
            initgraph(&gd, &gm, "");
  
            rectangle(40,70,410,290);
  
            getch();
  
            closegraph();
      }

![image](https://user-images.githubusercontent.com/76850300/198902039-ceb7a73e-68b4-4fd8-a4f8-bbdfb727315a.png)

___________________________________________________________________________________

