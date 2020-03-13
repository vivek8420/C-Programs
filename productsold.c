#include<stdio.h>

void manufactured(int a[4][5])
{
  int i,j;
  printf("enter the manufacturig value:\n");
  for(i=0;i<4;i++)
  {
    for(j=0;j<5;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
}

void sold(int b[4][5])
{
 int i,j;
 printf("enter the sold value:\n");
 for(i=0;i<4;i++)
 {
   for(j=0;j<5;j++)
   {
     scanf("%d",&b[i][j]);
   }
 }
}

int weektotal(int c[4],int a[4][5],int n)
{
  int i,j,total=0;
  i=n-1;

  for(j=0;j<5;j++)
  {
   total =total+a[i][j];
  }
  return(total);
}

int main()
{
  int manuf[4][5],sell[4][5],week[4],n,total;

  manufactured(manuf);

  sold(sell);
  printf("enter the week value:\n");
  scanf("%d",&n);

  total=weektotal(week,manuf,n);
  printf("the total value of one week=%d",total);

}
