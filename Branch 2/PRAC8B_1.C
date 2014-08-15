#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void fill_right(x,y)
int x,y;
{
if((getpixel(x,y)!=WHITE)&&(getpixel(x,y)!=RED))
{
putpixel(x,y,RED);
fill_right(++x,y);
x=x-1;
fill_right(x,y-1);
fill_right(x,y+1);
delay(5);
}}
void fill_left(x,y)
int x,y;
{
if((getpixel(x,y)!=WHITE)&&(getpixel(x,y)!=RED))
{
putpixel(x,y,RED);
fill_left(--x,y);
x=x+1;
fill_left(x,y-1);
fill_left(x,y+1);
delay(5);
}}
void main()
{
int x,y,a[10][10];
int gd,gm,n,i;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tcc\\bgi");
printf("\n\n enter no of edges of polygon:") ;
scanf("%d",&n);
printf("\n\n enter coords of polygon:\n\n") ;
for(i=0;i<n;i++)
{
 printf("\t x%d,y%d:",i,i);
 scanf("%d,%d",&a[1][0],&a[1][1]);
}
a[n][0]=a[0][0];
a[n][1]=a[0][1];
printf("\n\nEnter the seed pt:");
scanf("%d","%d",&x,&y);
cleardevice();
setcolor(WHITE);
for(i=0;i<n;i++)
{
 line(a[1][0],a[1][1],a[i+1][0],a[i+1][1]);
}
fill_right(x,y);
fill_left(x-1,y);
getch();
}