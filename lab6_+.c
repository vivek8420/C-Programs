
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i=0,j=0;

    char *ptr,str1[20],str2[20];
    ptr=str1;

    printf("ENTER THE FIRST STRING:\n");
    scanf("%s",ptr);

    printf("ENTER THE SECOND STRING:\n");
    scanf("%S",str2);

    while(*ptr++!='\0')
    {
         j=strchr(str1,str2[i]);
         printf("%u\n",j);
         if(j==NULL)
         {
           printf("string is not anagrams");
            exit(0);
         }
         i++;
    }

    printf("string is anagram");
}
