# include <iostream.h>
# include <graphics.h>
# include <conio.h>

void main()
{
 int gd=DETECT,gm;
 int x1,x2,y1,y2,x3,y3,x4,y4;
 float sx,sy;
 initgraph(&gd,&gm,"c:\\tcc\\bgi");
 
 cout<<"\t\t\t****Scaling of line ***\n\n";
 cout<<"\t Enter the co_ordinates of line ";
 cin>>x1>>y1>>x2>>y2;

 line(x1,x2,y1,y2);
 
 cout<<"\n Enter the scaling distance : \n";
 cout<<"sx,sy=";
 cin>>sx>>sy;
 
 x3=(int)x1*sx;
 y3=(int)y1*sy;
 x4=(int)x2*sx;
 y4=(int)y2*sy;
 
 setcolor(RED);
 line(x3,y3,x4,y4);
 
 getch();
 closegraph();
}