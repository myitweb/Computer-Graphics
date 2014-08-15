#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>

void ddaline(int x1,int y1, int x2, int y2)
{
int dx,dy,step,i,x,y;
float xinc,yinc;
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
if((abs(dx))>=(abs(dy)))
{

step=abs(dx);

}
else
{
	step = abs(dy);
}
xinc = dx / step;
yinc = dy / step;
putpixel(x,y,WHITE);
for(i=1;i<=step;i++);
{
	x=x+xinc;
	y=y+yinc;
	putpixel(int(x),int(y),WHITE) ;
	delay(50);
	}
}

void bresLine(int x1,int y1,int x2,int y2)
{
	int dx,dy,x,y,i;
	float e;
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	e=((dy/dx)-(1/2));
	for(i=0;i<=dx;i++);
	{
	putpixel(int(x),int(y),WHITE);
	while(e>=0)
	{
	y=y+1;
	e=e-1;
	}
	x=x+1;
	e=((dy / dx)+e);
	}
	}
	void main()
	{
	int x1,y1,x2,y2,gd,gm,opt;
	clrscr();
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tcc\\bgi");
	cout<<"\t\***LINE DREAWING***\N\N";
	cout<<"ENTER YOUR PREFERED ALGORITHM TO DRAW A LINE"<<endl;
	cout<<"1.DDA"<<endl<<"2.bresline"<<endl<<"your choice 1 or 2"<<endl;
	cin>>opt;
	cout<<"enter the coordinate of 1st endpoint"<<endl;
	cin>>x1>>y1;
	cout<<"enter the coordinate of 2nd endpoint"<<endl;
	cin>>x2>>y2;


	if(opt == 1)
	{
	 cleardevice();
	 cout<<"DDA LINE DWARING ALGORITHM";
	 ddaline(x1,y1,x2,y2);
	 }
	 else
	 {
	 cleardevice();
	 cout<<"bresline's dwawing algorithm";
	 bresLine(x1,y1,x2,y2);
	 }
	 getch();
	 closegraph();
	 }



