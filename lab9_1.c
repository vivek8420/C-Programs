#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
int i,*n,k,j;
n=(int *)malloc(sizeof(int));
printf("enter the value of string no:\n");
scanf("%d",n);
char *p[*n],*q;
for(i=0;i<*n;i++)
{
  printf("enter the sring %d:\n",i+1);
 p[i]=(char *)malloc(15);
 scanf("%s",p[i]);
}

for(i=0;i<*n;i++)
{  
 printf("%s\n",p[i]);
}

for(i=0;i<*n;i++)
{
   for(j=0;j<*n-1;j++)
   {
     k=strcmp(p[j],p[j+1]);
     if(k>0)
     {
       q=p[j];
       p[j]=p[j+1];
       p[j+1]=q;
     }
   }
}

printf("\n\nSORTING STRING:\n");
for(i=0;i<*n;i++)
{
  printf("%s\n",p[i]);
}
}
