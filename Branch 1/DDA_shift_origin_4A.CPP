# include <iostream.h>
# include <graphics.h>
# include <conio.h>
# include <math.h>

void main()
{
 int x1,x2,y1,y2,gd,gm,dx,dy,steps,k;
 float xi,yi,x,y;
 int x0,y0,xmax,ymax;
 clrscr();
 cout<<"Enter the Co-ordinate of 1st End Point ";
 cin>>x1>>y1;
 cout<<"\n Enter the Co-ordinate of 2nd End Point ";
 cin>>x2>>y2;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tcc\\bgi");
 
 xmax=getmaxx();
 ymax=getmaxy();
 
 x0=xmax/2;
 y0=ymax/2;
 
 line(320,0,320,480);
 line(0,240,640,240);
 
 dx=(x2-x1);
 dy=(y2-y1);
 
 if ((abs(dx))>(abs(dy)))
 {
  steps=abs(dx);
 }
 else
 {
  steps=abs(dy);
 }
 
 xi=(float)dx/steps;
 yi=(float)dy/steps;

 x=x1;
 y=y1;
  
 for(k=0;k<=steps;k++)
 {
  putpixel(x0+x,ymax-(y0+y),WHITE);
  x=x+xi;
  y=y+yi;
 }
 
 getch();
 cleardevice();
 
} 