#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
void main()
{
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tcc\\bgi");
rectangle(50,50,100,100);
flood(55,54,4,15);
getch();
closegraph();
}
flood(seed_x,seed_y,foreground_col,background_col)
{
 if(getpixel(seed_x,seed_y)!=background_col&&getpixel(seed_x,seed_y)!=foreground_col)
 {
 putpixel(seed_x,seed_y,foreground_col);
 delay(10);
 flood(seed_x+1,seed_y,foreground_col,background_col);
 flood(seed_x-1,seed_y,foreground_col,background_col);
 flood(seed_x,seed_y+1,foreground_col,background_col);
 flood(seed_x,seed_y-1,foreground_col,background_col);
 }
 }

