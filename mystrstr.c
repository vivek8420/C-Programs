#include<stdio.h>

char *  mystrstr( char *, char *);

void main()
{
    char str1[50],str2[20];

    printf("enter the destination string:\n");
    gets(str1);
    printf("enter the source string:\n");
    gets(str2);

      char *ptr=mystrstr(str1,str2);
    printf("%u",ptr);


}

char * mystrstr( char *ptr1,char *ptr2)
{
      int flag=0;
     char *ptr;
    while(*ptr1 != '\0')
    {
            ptr=ptr2;
       if(*ptr1==*ptr)
         {

            while(*ptr!='\0')
            {
               if(*ptr1==*ptr)
               {
                  flag=1;
                  ptr++;
                  ptr1++;
               }
               else
               {
                   flag=0;
                 ptr1++;
                 break;
                 }
            }

            if(flag==1)
               break;
         }

         else
            ptr1++;

    }
    while(*ptr2++!='\0')
    {
         ptr1--;
    }
    if(flag==1)
        return(ptr1);
        else
        return(NULL);
}
