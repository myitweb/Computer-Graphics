#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
  float d;
  int gd,gm,x,y,r,xc,yc;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"c:\\tcc\\bgi");
  cleardevice();
  cout<<"\n\n\t\t\***Bresline's Circle Drawing***\n\n";
  cout<<"Enter the radius of circle:";
  cin>>r;




  cout<<"Enter the midpoint value:";
  cin>>xc>>yc;
  x=0;
  y=r;
  d=3-2*r;
  do
  {
   putpixel(xc+x,yc+y,0);
   putpixel(xc+y,yc+x,1);
   putpixel(xc+y,yc-x,2);
   putpixel(xc+x,yc-y,3);
   putpixel(xc-x,yc-y,4);
   putpixel(xc-y,yc-x,5);
   putpixel(xc-y,yc+x,6);
   putpixel(xc-x,yc+y,8);
   if(d<=0)
   {
   d=d+4*x+6;
   }
   else
   {
   d=d+4*(x-y)+10;
   y=y-1;
   }
   x=x+1;
   delay(150);
   }
   while(x<y);
   getch();
   closegraph();
   }
