# include <iostream.h>
# include <graphics.h>
# include <conio.h>

void main()
{
 int gd=DETECT,gm;
 int x1,x2,y1,y2,x3,y3,x4,y4,tx,ty;
 initgraph(&gd,&gm,"c:\\tcc\\bgi");
 
 cout<<"\t\t\t****Translation of line ***\n\n";
 cout<<"\t Enter the co_ordinates of line ";
 cin>>x1>>y1>>x2>>y2;
 
 line(x1,x2,y1,y2);

 cout<<"\n Enter the translation distance : \n";
 cout<<"tx  ty=";
 cin>>tx>>ty;
 
 x3=x1+tx;
 y3=y1+tx;
 x4=x2+tx;
 y4=y2+tx;
 
 setcolor(RED);
 line(x3,y3,x4,y4);
 
 getch();
 closegraph();
}