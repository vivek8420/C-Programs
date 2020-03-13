#include<stdio.h>
int main()
{
  int i,j,n;
  int a[10][10]={0};

  printf("enter the value of n:\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      if(j==0||j==i)
      {
        a[i][j]=1;
      }
      else
       a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
        printf(" ");
    }

    for(j=0;j<=i;j++)
    {
     printf("%4d",a[i][j]);
    }
    printf("\n");
  }
}
