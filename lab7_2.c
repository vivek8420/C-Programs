#include<stdio.h>

int mystrcmp( char *, char *);

int main()
{
   char str1[50],str2[20];
   
   printf("enter the first string:\n");
   gets(str1);
   printf("enter the second string:\n");
   gets(str2);
  
   
   int i;
   i=mystrcmp(str1,str2);
   
   printf("%d",i);

}

int mystrcmp( char *ptr1, char *ptr2)
{
    while(*ptr1==*ptr2)
    {
       ptr1++;
       ptr2++;
    }
   return(*ptr1-*ptr2);
}
