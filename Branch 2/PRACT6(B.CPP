#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 int X1,Y1,X2,Y2,n,i;
 int a[20][2];
 initgraph(&gd,&gm,"c:\\tcc\\bgi");
 cout<<"n\n\n\t\*** DRAWING POLYGOAN ***";
 cout<<"\n\n\tEnter the no. of edges of polygon:";
 cin>>n;
 cout<<"\n\n\tEnter the co-ordinate of polygon:\n\n\n";
 for(i=0;i<n;i++)
 {
  cout<<"\tx"<<i<<"Y"<<i<<":\t";
  cin>>a[i][0]>>a[i][1];
  }
  a[n][0]=a[0][0];
  a[n][1]=a[0][1];
  for(i=0;i<n;i++)/*DRAW POLY*/
  {
  X1=a[i][0];
  Y1=a[i][1];
  X2=a[i+1][0];
  Y2=a[i+1][1];
  line(X1,Y1,X2,Y2);
  }
getch();
  closegraph();
  }