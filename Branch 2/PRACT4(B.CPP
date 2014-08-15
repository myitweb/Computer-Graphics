/*Modified Bresenham's line drawing*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 int x1,y1,x2,y2,dx,dy,x,y,xend;
  int p,gd,gm,xmax,ymax,x0,y0;
  cout<<"\n\n\tBresenham's line drawing with origin shifted to the center of screen...";
  cout<<"\n\nEnter the co-ordinate value of first end point..";
  cin>>x1>>y1;
  cout<<"\n\nEnter the co-ordinate value of second end point...";
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

  if(x1>x2)
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
  p=p+(2*dy);
  else
  {
  y=y+1;
  p=p+2*(dy-dx);
  }
  putpixel(x0+x,ymax-(y0+y),RED);
  }
  while(x<xend);
  clrscr();
  getch();
  closegraph();
  }

