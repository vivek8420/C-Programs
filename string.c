#include<stdio.h>
int main()
{
   int n,i;
   float a[n],avg,sum;
   printf("enter the no:");
   scanf("%d",&n);
  if(n<=10)
  { 
   for(i=0;i<n;i++)
   {
    scanf("%f",&a[i]);
    sum=sum+a[i];
    }
    avg=sum/n;
    printf("%f",avg);
  }
 else
  printf("error");
   
}   
