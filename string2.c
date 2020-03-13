#include<stdio.h>
void main()
{
   int i,capital=0,small=0,space=0;
   char a[10];
   scanf("%s",a);
   printf("%s",a);

   for(i=0;a[i]!='\0';i++)
   {
     if(a[i]>=65&&a[i]<=91)
     capital++;
     else if(a[i]>=97&&a[i]<=123)
     small++;
     else
     space++;
   }
   printf("\n%d %d %d",capital,small,space);
}
