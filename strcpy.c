#include<stdio.h>
#include<string.h>


void mystrcpy(char *,char *);


main()
{
   char str[2][20]={"hello",
                     "ddu"};
    char *p[2];
    p[0]=str[0];
    p[1]=str[1];


    mystrcpy(p[0],p[1]);

    printf("%s",p[0]);
}

void mystrcpy(char *s1,char *s2)
{
      while((*s1++=*s2++)!='\0');
      *s1++='\0';
}
