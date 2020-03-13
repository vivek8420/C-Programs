#include<stdio.h>
#include<math.h>

int fact(int);
double cal(int);

int main()
{
  int n;
   printf("enter the no:\n");
scanf("%d",&n);

printf("%lf",cal(n));
return 0;
}

int fact(int i)
{
  int j=1;

  if(i==1)
   return 1;
 j=i*fact(i-1);
  return j;
 }

double cal(int n)
{
   double sum;
  if(n==1)
   return 0;
    sum=pow(n,n)/fact(n)+cal(n-1);
   return sum;
}
