#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 void main()
{
 int xc,yc,x,y,r,p;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\TURBOC3\BGI");
 printf("Enter coordinates of circle:");
 scanf("%d,%d", &xc,&yc);
 printf("Enter radius:");
 scanf("%d", &r);
 p=3-2*r;
 x=0;
 y=r;
while(x<=y){
 putpixel(xc+x,yc+y,7);
 putpixel(xc-x,yc-y,7);
 putpixel(xc+x,yc-y,7);
 putpixel(xc-x,yc+y,7);
 putpixel(xc+y,yc+x,7);
 putpixel(xc-y,yc-x,7);
 putpixel(xc+y,yc-x,7);
 putpixel(xc-y,yc+x,7);
 if(p<=0)
 {
  p=p+4*x+6;
 }
 else
 {
  p=p+4*(x-y)+10;
  y=y-1;
 }
  x=x+1;
 }

 getch();

 closegraph();

  }