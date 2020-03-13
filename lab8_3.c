#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int arge,char *argv[])
{
  int i,n;
  
  for(i=1;i<arge;i++)
  {
    printf("%s\n",argv[i]);
  }
  int a,b;
  char c;
  a=atoi(argv[1]);
  b=atoi(argv[3]);
  c=*argv[2];
 
 switch(c)
 {
  case '+':printf("%d",a+b);
           break;
  case '-':printf("%d",a-b);
          break;
  case '*':printf("%d",a*b);
           break;
   default:printf("%d",a/b);
 
 }

}
