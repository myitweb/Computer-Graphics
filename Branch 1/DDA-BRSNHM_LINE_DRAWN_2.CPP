# include <iostream.h>
# include <graphics.h>
# include <conio.h>
# include <dos.h>
# include <math.h>
void ddaline(int x1,int y1,int x2,int y2)
{
	int dx,dy,step,i,x,y;
	float xinc,yinc;
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	if ((abs(dx))>=(abs(dy)))
	{
	step=abs(dx);
	}
	else
	{
	step=abs(dy);
	}
	xinc=dx/step;
	yinc=dy/step;
	putpixel(x,y,WHITE);
	for(i=1;i<=step;i++)
	{
	x=x+xinc;
	y=y+yinc;
	putpixel(int(x),int(y),WHITE);
	delay(50);
	}
}
void bresline(int x1,int y1,int x2,int y2)
{
int dx,dy,x,y,i;
float e;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
e=(dx/dy)-(1/2);

for (i=0;i<=dx;i++)
{

	putpixel(int (x),int (y),WHITE);
	while(e>=0)
	{
	y=y+1;
	e=e-1;
	}
	x=x+1;
	e=((dx/dy)+e);
	delay(50);

}
}

void main()
{
int x1,x2,y1,y2,gd,gm,opt;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tcc\\bgi");
cout<<"Enter the Co-ordinate of 1st End Point ";
cin>>x1>>y1;
cout<<"\n Enter the Co-ordinate of 2nd End Point ";
cin>>x2>>y2;
cout<<"Enter No to draw line by prefered algorithm "<<endl;

cout<<"Your options are 1.  DDA "<<endl<<"2.  Bresenhams "<<endl<<"Your options are 1 or 2 ";
cin>>opt;
if (opt==1)
{
cleardevice();
cout<<"DDA Line Aloforiyhm "<<endl;
ddaline(x1,y1,x2,y2);
}
else
{
cleardevice();
cout<<"Bresenhams Line Drawing Algorithm  "<<endl;
bresline(x1,y1,x2,y2);
}
getch();
closegraph();

}