#include<stdio.h>
#include<stdlib.h>

int main()
{
     char *p,*q;
     p=(char *)malloc(6);
     
     printf("enter the string:\n");
     scanf("%s",p);
      
          printf("%u\n",p);
         printf("\nSTR=%s\n",p);
         
            q=(char *)realloc(p,10);
            
            if(q==NULL)
              printf("space is not available\n");
            
              printf("enter the large strin:\n");
              scanf("%s",p);
              printf("%u",q);
              printf("\nLARGE STRING= %s\n",p);
              
}
