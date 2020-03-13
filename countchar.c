#include<stdio.h>
int main()
{
   int capital=0,small=0,special=0,space=0;
   char stg;
   printf("enter the string by one char :");
   stg=getchar();
  do
   {
       stg=getchar();
       printf("%C",stg);
       if(stg>=65&&stg<=91)
        capital++;
        else if(stg>=97&&stg<=123)
        small++;
        else if(stg>=35&&stg<=38)
         special++;
        else
         space++;
   }
   while(stg!='\n');
   printf("\n%d\n%d\n%d\n%d",capital,small,special,space);
}
