#include<stdio.h>
#include<stdlib.h>
int gsd(int,int,int);

void main()
{
   int n,m,p;

   printf("enter the first number:\n");
   scanf("%d",&n);
   printf("enter the second number:\n");
   scanf("%d",&m);

   p=(n>m)?m:n;
   printf("%d",gsd(n,m,p));
}

int gsd(int m,int n,int p)
{
    int i=0;

    if(n%p==0&&m%p==0)
    {
        return p;
    }

   i= gsd(m,n,p-1);
        return i;

}


