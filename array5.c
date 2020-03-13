#include<stdio.h>
int main()
{
int a[10]={0};
int i=0,n,search,count;

     while(i<10)
     scanf("%d",&a[i++]);

     scanf("%d",&search);
     count=0;

     for(i=0;i<10;i++)
     {
         if(search==a[i])
         count++;
         if(count==3)
         {
             printf("%d",i);
             exit(0);
         }
     }
}
