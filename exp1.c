#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int dx,i,j,dy,x1,x,y,y1,x2,y2,xinc,yinc,length;
	float m;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\YOGISOFT\TC\BGI");
	printf("Enter Starting Co-ordinates");
	scanf("%d%d",&x1,&y1);
	printf("Enter End Co-ordinates");
	scanf("%d%d",&x2,&y2);
	printf("x1=%d\n y1=%d\n x2=%d\n y2=%d\n",x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	printf("dx=%d\n",dx);
	printf("dy=%d\n",dy);
	printf("m=%f\n",m);
	if(dx>dy)
	{
		length=dx;
	}
	else
	{
		length=dy;
	}
	xinc=dx/length;
	yinc=dy/length;
       //	printf("xinc=%d\n",xinc);
       //	printf("yinc=%d\n",yinc);
	putpixel(x1,y1,3);
	x=x1;
	y=y1;
       //	printf("x=%d\n",x);
       //	printf("y=%d\n",y);
	for(i=0;i<=length;i++)
	{
		x1=x1+xinc;
	       //	printf("%d\t",x1);
	       //	printf("\n");
		y1=y1+yinc;
	       //	printf("%d\t",y1);

		putpixel(x1,y1,4);
	}
	putpixel(x,y,3);
	printf("Exit\n");
	getch();
	closegraph();
}  