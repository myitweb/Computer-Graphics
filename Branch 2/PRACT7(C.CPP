 #include<iostream.h>
 #include<conio.h>
 #include<graphics.h>
 #include<math.h>
 void main()
 {
 int i,n,k,gd=DETECT,gm;
 int xo,yo,x1,y1,x2,y2,xmax,ymax;
 int a[20][2],b[20][2];
 float theta;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c\\tcc\\bgi");
 clrscr();
 cout<<"\t\t\t***Rotation of an polygon***\n\n";
  cout<<"\n Enter the no. of edges of polygon:";
  cin>>n;
  cout<<"\n\n\Enter the co-ordinates of polygon:\n\n\n";
  for(i=0;i<n;i++)
  {
   cout<<"\tx"<<i<<" Y"<<i<<"\t";
   cin>>a[i][0]>>a[i][1];
   }
   a[n][0]=a[0][0];
   a[n][1]=a[0][1];

   xmax=getmaxx();
   ymax=getmaxy();
   xo=xmax/2;
   yo=ymax/2;
   line(xo,0,xo,ymax);
   line(0,yo,xmax,yo);
   for(i=0;i<n;i++)/*draw poly*/
   {
   x1=xo+a[i][0];
   y1=ymax-(yo+a[i][1]);
   x2=xo+a[i+1][0];
   y2=ymax-(yo+a[i+1][1]);

   line(x1,y1,x2,y2);
   }

   cout<<"\nEnter the angle of rotation:";
   cin>>theta;
   theta=(theta*3.14)/180;
   for(i=0;i<n;i++)
   {
   b[i][0]=(int)a[i][0]*cos(theta)-(a[i][1]*sin(theta));
    b[i][1]=(int)a[i][0]*sin(theta)+(a[i][1]*cos(theta));
    }
    b[n][0]=b[0][0];
    b[n][1]=b[0][1];
    for(i=0;i<n;i++)
    {
    x1=xo+b[i][0];
    y1=ymax-(yo+b[i][1]);
    x2=xo+b[i+1][0];
    y2=ymax-(yo+b)[i+1][1];
    setcolor(RED);
    line(x1,y1,x2,y2);
    }
    getch();
    closegraph();
    }
