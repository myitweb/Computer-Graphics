#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 int gd,gm,x1,y1,x2,y2,dx,dy,steps,k;
 float xi,yi,x,y;
 int xo,yo,xmax,ymax;
 clrscr();
 cout<<"\n\nEnter the coordinate of first end point:";
 cin>>x1>>y1;
  cout<<"\n\nEnter the coordinate of second end point:";
  cin>>x2>>y2;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"c:\\tcc\\bgi");
  xmax=getmaxx();
  ymax=getmaxy();
  xo=xmax/2;
  yo=ymax/2;
  line(320,0,320,480);
