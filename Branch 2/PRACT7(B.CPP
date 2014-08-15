 #include<iostream.h>
 #include<conio.h>
 #include<graphics.h>
 void main()
 {
  int n,i, gd=DETECT,gm;
  int X1,X2,Y1,Y2;
  int a[20][2],b[20][2];
  float sx,sy;
  initgraph(&gd,&gm,"c:\\tcc\\bgi");
  cout<<"\t\t\t***Scaling of an polygon***\n\n";
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
   for(i=0;i<n;i++)
   {
   X1=a[i][0];
   Y1=a[i][1];
   X2=a[i+1][0];
   Y2=a[i+1][1];
   line(X1,Y1,X2,Y2);
   }
   cout<<"\nEnter scaling of parameters:\n";
   cout<<"sx,sy=";
   cin>>sx>>sy;
   for(i=0;i<n;i++)
   {
    b[i][0]=a[i][0]*sx;
    b[i][1]=a[i][1]*sy;
    }
    b[n][0]=b[0][0];
    b[n][1]=b[0][1];
    for(i=0;i<n;i++)

    {
    X1=b[i][0];
    Y1=b[i][1];
    X2=b[i+1][0];
    Y2=b[i+1][1];

     line(X1,Y1,X2,Y2);
     }
     getch();
     closegraph();
     }
