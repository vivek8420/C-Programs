#include<stdio.h>

struct vivek
{
   int ch;
   int word;
   int line;
}a={1,1,1};

void wc(struct vivek *,char []);

main()
{
   void *ptr=&a;

   char str[100];
   printf("enter the strig:\n");
   gets(str);
   wc(ptr,str);
}

void wc(struct vivek *ptr,char str[])
{
  int i=0;
    while(str[i]!='\0')
    {
         if(str[i]=='\n')
            ptr->line++;

            if(str[i]==' ' &&((str[i+1]>64&&str[i+1]<91)||(str[i+1]>96&&str[i+1]<123)))
               ptr->word++;

               ptr->ch++;
               i++;
    }

    printf("char=%d\n",ptr->ch);
    printf("word=%d\n",ptr->word);
    printf("line=%d",ptr->line);
}
