#include<stdio.h>

void fibo(int n,int a[])
{
    static int i=0,j=1,k;

     if(n==0)
     {
         return;
     }

     a[k]=i+j;
     i=j;
     j=a[k++];


     fibo(n-1,a);
}

void main()
{
   int i,n;

   printf("enter the no:");
   scanf("%d",&n);

   int a[n];

   fibo(n,a);
    printf("%2d\n",a[0]);

   for(i=0;i<n-1;i++)
   {
     printf("%2d\n",a[i]);
   }
}
