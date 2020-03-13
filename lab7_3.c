#include<stdio.h>

void mystrcat(char *,const char *);

int main()
{
  char str1[40],str2[20];
  
  printf("enter the first string:\n");
  gets(str1);
  printf("enter the second string:\n");
  gets(str2);
  
  char *ptr;
mystrcat(str1,str2);
  ptr=str1;  
  printf("%s",ptr);

}

void mystrcat(char *ptr1,const char *ptr2)
{
  while(*ptr1!='\0')
     ptr1++;
     
     while(*ptr2!='\0')
        *ptr1++=*ptr2++;
        *ptr1='\0';
 
}
