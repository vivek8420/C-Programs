#include<stdio.h>
int main()
{
  int i,j,n;
  int a[4]={0};
  char str[10][10]={
                     "zero",
                    "one",
                    "two",
                    "three",
                    "four",
                    "five",
                    "six",
                    "seven",
                    "eight",
                    "nine"
                    };

  printf("enter the no:\n");
  scanf("%d",&n);

  for(i=0;n>0;i++)
  {
   a[i]=n%10;
   n=n/10;
  }
  printf("%s thousand %s hundred %sty %s",str[a[3]][10],str[a[2]][10],str[a[1]][10],str[a[0]][10]);

}
