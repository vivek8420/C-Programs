#include<stdio.h>

void mystrcpy(char *,const char *);

void main()
{
     char str1[50],str2[20];
     
     printf("enter the destination string:\n");
     gets(str1);
     printf("enter the source string:\n");
     gets(str2);
     
     char *ptr;
     mystrcpy(str1,str2);
     ptr=str1;
     
     printf("%s",ptr);

}

void mystrcpy(char *ptr1,const char *ptr2)
{
    while((*ptr1++=*ptr2++)!='\0');
      
    *ptr1='\0';

}
