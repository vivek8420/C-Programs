#include<stdio.h>
void reverce();

 void main()
 {
     printf("enter the string:\n");
    reverce();
 }

  void reverce( )
 {
     char p;
     p=getchar();
    
    if(p==EOF)
        return;
         
    	reverce();
   putchar(p);

}
