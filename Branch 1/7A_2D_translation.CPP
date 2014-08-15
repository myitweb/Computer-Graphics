#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int n,i,tx,ty,x1,y1,x2,y2;
int a[20][2],b[20][2];
initgraph(&gd,&gm,"c:\\tcc\\bgi");

cout<<"\t\t\t***translation of a polygon***";
cout<<"\n\nEnter the no of edges of polygon";
cin>>n;
cout<<"\n\n\\t enter the coodinates of polugon:\n\n\n";

for(i=0;i<n;i++)
{
  cout<<"\tx"<<i<<"y"<<i;
  cin>>a[i][0]>>a[i][1];
  }
  a[n][0]=a[0][0];
  a[n][1]=a[0][1];

  for(i=0;i<n;i++)
  {
  x1=a[i][0];
  y1=a[i][1];
  x2=a[i+1][0];
  y2=a[i+1][1];

  line(x1,y1,x2,y2);
  }
  cout<<"\n enter translation distance:\n";
  cout<<"tx,ty=";
  cin>>tx>>ty;

  for(i=0;i<n;i++)
  {
   b[i][0]=a[i][0]+tx;
   b[i][1]=a[i][1]+ty;
}
b[n][0]=b[0][0];
b[n][1]=b[0][1];

for(i=0;i<n;i++)
{
x1=b[i][0];
y1=b[i][1];
x2=b[i+1][0];
y2=b[i+1][1];

line(x1,y1,x2,y2);
}
getch();
closegraph();
}