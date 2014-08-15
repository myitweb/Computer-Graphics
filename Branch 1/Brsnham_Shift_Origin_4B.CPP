# include <iostream.h>
# include <graphics.h>
# include <conio.h>
# include <math.h>

void main()
{
 int x1,x2,y1,y2,gd,gm,dx,dy,x,y,xend;
 int p,xmax,ymax,x0,y0;
 
 cout<<"\n\n\t Bresenham's line drawing with origin shifted to cnter of origin :";
 cout<<"\n\nEnter the Co-ordinate of 1st End Point ";
 cin>>x1>>y1;
 cout<<"\n\n Enter the Co-ordinate of 2nd End Point ";
 cin>>x2>>y2;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tcc\\bgi");
 
 xmax=getmaxx();
 ymax=getmaxy();
 
 x0=xmax/2;
 y0=ymax/2;
 
 line(x0,0,x0,ymax);
 line(0,y0,xmax,y0);
 
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 p=2*(dy-dx);
 
 if (x1>x2)
 {
   x=x2;
   y=y2;
   xend=x1;
 }
 else
 {
  x=x1;
  y=y1;
  xend=x2;
 }
 
 do
 {
  x=x+1;
  if(p<0)
  {
   p=p+2*(dy-dx);
  }
  else
  {
   y=y+1;
   p=p+2*(dy-dx);
  }
  putpixel(x0+x,ymax-(y0+y),RED);
 }
 
 while(x<xend);
 getch();
 closegraph();
 
}