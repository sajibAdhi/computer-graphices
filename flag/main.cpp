#include<graphics.h>
#include<conio.h>
main()
{
   int gd = DETECT,gm,left=200,top=100,right=400,bottom=200,x= 300,y=150,radius=30;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   rectangle(left, top, right, bottom);
   circle(x, y, radius);


   getch();
   closegraph();
   return 0;
}
