#include<stdio.h>
int factorial(int);

int main()
{
  int fact,n;
  
     printf("enter the no:\n");
     scanf("%d",&n);
   printf("%d",factorial(n));
}
 
 int factorial(int n)
{
 int fact=1;
      if(n==1)
      return 1;
     
      fact=n*factorial(n-1);
     return fact;
}
