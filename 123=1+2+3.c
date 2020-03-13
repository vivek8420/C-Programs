#include<stdio.h>
int plus(int);

int main()
{
   int n;

   printf("enter the  number:\n");
   scanf("%d",&n);

   printf("answer=%d",plus(n));
   return 0;
}

int plus(int n)
{
   int i;

   if(n<=0)
      return 0;

      i=n%10+plus(n/10);
      return(i);
}
