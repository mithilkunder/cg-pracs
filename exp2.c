#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int x,y,p,x1,y1,x2,y2,dx,dy,xinc,yinc,i,pinc;
	float m;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("Enter Starting Co-ordinates");
	scanf("%d %d",&x1,&y1);
	printf("Enter End Co-ordinates");
	scanf("%d %d",&x2,&y2);
      
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	x=x1;
	y=y1;
	p=2*dy-dx;
	detectgraph(&gd,&gm);

	printf("m=%f\t",m);
    
	putpixel(x,y,7);
	if(m<1)
	{
		for(i=x1;i<=x2;i++)
		{
			if(p<0)
			{
				xinc=x+1;
				yinc=y;
				pinc=p+2*dy;
				x=xinc;
				y=yinc;
			}
			else
			{
				xinc=x+1;
				yinc=y+1;
				pinc=p+2*dy-2*dx;
				x=xinc;
				y=yinc;
			}
			putpixel(x,y,WHITE);
		}
	}
	else
	{
		for(i=x1;i<=x2;i++)
		{
			if(p<0)
			{
				xinc=x;
				yinc=y+1;
				pinc=pinc+2*dx;
				x=xinc;
				y=yinc;
			}
			else
			{
				xinc=x+1;
				yinc=y+1;
				pinc=pinc+2*dy-2*dx;
				x=xinc;
				y=yinc;
			}
			putpixel(x,y,WHITE);
		}
	}
	getch();
	closegraph();
} 
