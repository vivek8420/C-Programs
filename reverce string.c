#include<stdio.h>
char reverce(char);

 void main()
 {
     char i;
     printf("enter the string:\n");
     i=getchar();
    reverce(i);
 }

 char reverce(char i)
 {
     char j,p;
    if(i==EOF)
        return 0;
        p=getchar();
   putchar(j);
 j=reverce(p);
 return j;

}
