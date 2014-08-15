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
  cout<<"\n\n\t\t\***Mid-Point circle genaretion***\n\n";
  cout<<"Enter the radius of the circle:";
  cin>>r;
  cout<<"\n\n\Enter the midpoint value:";
  cin>>xc>>yc;
  x=0;
  y=r;
  d=(5/4)-r;
  do
  {
  putpixel(xc+x,yc+y,2);
  putpixel(xc+y,yc+x,1);
  putpixel(xc+y,yc-x,2);
  putpixel(xc+x,yc-y,3);
  putpixel(xc-x,yc-y,4);
  putpixel(xc-y,yc-x,5);
  putpixel(xc-y,yc+x,5);
  putpixel(xc-x,yc+y,4);
   if(d<=0)
   {
    d=d+2*x+3;
    }
    else
    {
     y=y-1;
     d=d+2*(x-y)+5;
     }
     x=x+1;
     delay(100);
     }
     while(x<y);
     getch();
     closegraph();
     }

