#include<stdio.h>
int binary(int n)
{
 static int i=0;
printf("%d",i);
if(n>0)
{
i=n%2;
binary(n/2);
return i;
}
return 0;
}

int main()
{
 int n;
 printf("enter the no:\n");
 scanf("%d",&n);

binary(n);

}
