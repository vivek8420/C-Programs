#include<stdio.h>
int main()
{
int i,n=5,t,j;
int a[5]={5,7,1,11,33};

  for(i=0;i<n;i++)
  {
      for(j=0;j<n-i;j++)
      {
           if(a[j]>a[j+1])
           {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
           }
      }
  }
  for(i=0;i<n;i++)
    printf("%d",a[i]);


}
