#include<stdio.h>
#include<string.h>

void main()
{
   int n,l;
   char str1[20],str2[20];

   printf("enter the number of character,you want to copy:\n");
   scanf("%s",str1);
   scanf("%s",str2);

   l=strlen(str1);

   strncpy(&str1[l-n],str2,n);

   printf("%s",str1);

}
