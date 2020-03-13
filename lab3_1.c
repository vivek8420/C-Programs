#include<stdio.h>
void star()
{
  int i;
for(i=1;i<=15;i++)
{
  printf("* ");
}
printf("\n");
}

void minus(int n)
{
int i,j,k;
for(j=1;j<=n;j++)
{
      for(i=0;i<20;i++)
    {
      printf("_ ");
    }
printf("\n");
for(i=1;i<=10;i++)
{  
  k=j*i;
  printf("%4d",k);
}
printf("\n");
}
}


int main()
{
  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
  
 star();
 minus(n);
 star();
}  
 
