#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int arr[]={540,220,590,270,320,510,320,490,270,540,220};
initgraph(&gd,&gm,"c:\\tcc\\bgi");
setcolor(GREEN);
drawpoly(6,arr);
outtextxy(500,270,"PENTAGON");
getch();
closegraph();
}