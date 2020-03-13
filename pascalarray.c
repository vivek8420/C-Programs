#include<stdio.h>
void space(int n)
{
   int i;
   for(i=1;i<n;i++)
   {
     printf(" ");
   }
   printf("\n");
}
void pascal(int n,int a[][25])
{
 int i,j;
 for(i=0;i<n;i++)
 {
   a[i][j]=1;
   for(j=1;j<=i;0)
   {
     if(j==i)
     {
      a[i][j]=1;
      break;
     }
     else
     a[i][j]=a[i-1][j-1]+a[i][j];
   }
 }
}
void print(int n,int a[][25])
{
  int i,j;
  space(n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%4d",a[i][j]);
    }
  }
}
int main()
{
  int i,j,n;

  printf("enter the value of n:\n");
  scanf("%d",&n);
  int a[25][25]={0};

  pascal(n,a);
  print(n,a);


}
