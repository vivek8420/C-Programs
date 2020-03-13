#include<stdio.h>
char * mystrlen(char const *);

int main()
{
  char str[20];
  char const *ptr;
  char const *ptr2;
 
  
  printf("enter the string:\n");
  gets(str);
  
  ptr2=mystrlen(ptr);
 printf("\n%d",ptr2-ptr);
}

char * mystrlen(char const *ptr)
{
   while(*ptr !='\0')
   {
    ptr++;
   }
   return(ptr);

}
