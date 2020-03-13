#include<stdio.h>+
void readData(int x[][3],int n,int m)
{
   int i,j;

   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
      scanf("%d",&x[i][j]);
     }
     printf("\n");
   }
}

void add(int a[][3],int b[][3],int c[][3],int d[][3],int f1,int f2)
{
  int i,j;

  for(i=0;i<f1;i++)
  {
    for(j=0;j<f2;j++)
    {
      d[i][j]=a[i][j]+b[i][j]+c[i][j];
    }
  }
}

void printData(int x[][3],int t1,int t2)
{
  int i,j;
  for(i=0;i<t1;i++)
  {
      for(j=0;j<t2;j++)
      {
        printf("%2d",x[i][j]);
      }
  printf("\n");
  }
}

void main()
{
  int a[3][3],b[3][3],c[3][3],res[3][3];

  printf("enter the dirst array:\n");
  readData(a,3,3);
  printf("enter the second array:\n");
  readData(b,3,3);
  printf("enter the third array:\n");
  readData(c,3,3);

  add(a,b,c,res,3,3);

  printData(res,3,3);
}
