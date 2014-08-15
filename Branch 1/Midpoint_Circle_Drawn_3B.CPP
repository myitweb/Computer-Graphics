#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>

void main()
{
 float d;
 int gd,gm,x,y,r,xc,yc;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tcc\\bgi");

 cleardevice();
 cout<<"\n\n\t\t***-Midpoint circle drawing-***\n\n";
 cout<<"Enter the radius of circle :";
 cin>>r;

 cout<<"\n\n Enter the midpoint value :";  
 cin>>xc>>yc;
 
 x=0;
 y=r;
 d=(5/4)*r;

 do 
 {
	putpixel(xc+x,yc+y,15); 
	putpixel(xc+y,yc+x,15); 
	putpixel(xc+x,yc-y,15); 
	putpixel(xc+y,yc-x,15); 
	putpixel(xc-x,yc-y,15); 
	putpixel(xc-x,yc+y,15); 
	putpixel(xc-y,yc+x,15); 
	putpixel(xc-y,yc-x,15);  
  
	if(d<=0)
	{
		d=d+2*x+3;

	}

	else
	{
	 	d=d+2*(x-y)+5;
		y=y-1;
	} 
	x=x+1;
	delay(50);
 }

 while (x<y);
 getch();
 closegraph();

}