#include<stdio.h>
int binary(int n)
{
int i;
 if(n==0)
 return 0;
 
 i=n%2+10*(binary(n/2));
 return i;
 }
 
 int main()
 {
   int n;
   printf("enter the no:\n");
   scanf("%d",&n);
   printf("%d",binary(n));
   }
