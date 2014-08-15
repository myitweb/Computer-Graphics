# include <iostream.h>
# include <graphics.h>
# include <conio.h>
# include <math.h>

void main()
{
 int gd=DETECT,gm;
 int arr[]={540,220,590,270,570,320,510,320,490,270,540,220};
 initgraph(&gd,&gm,"c:\\tcc\\bgi");
 setcolor (MAGENTA);
 drawpoly (6,arr);
 outtextxy(500,270,"pentagon");
 getch();
 closegraph();
}