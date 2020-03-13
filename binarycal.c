#include<stdio.h>
#include<math.h>
/*convert binary to decimal*/
int main()
{
   int i,j,n,dec=0;

   printf("enter the binari no:");
   scanf("%d",&n);

   for(i=0;n>0;i++)
   {
       j=n%10;
       dec=dec+pow(2,i)*j;
       n=n/10;

   }
   printf("%d",dec);
}
