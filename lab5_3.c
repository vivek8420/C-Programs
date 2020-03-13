
#include<stdio.h>
#include<string.h>

int main()
{ int n;
   printf("enter the no of string:\n");
   scanf("%d",&n);


   char str[n][10];
   int i,j,k;

   for(i=0;i<n;i++)
   {
     printf("entert  string %d",i+1);
     scanf("%s",str[i]);
   }

   char *p[n],*t;

   for(i=0;i<n;i++)
   {
       p[i]=str[i];
   }

   printf("before sort:\n");

   for(i=0;i<n;i++)
   {
       printf("%s\n",p[i]);
   }

   for(k=0;k<n;k++)
   {

         for(i=0;i<n-1;i++)
         {
         j=strcmp(p[i],p[1+i]);

         if(j>0)
         {
             t=p[i];
             p[i]=p[i+1];
            p[i+1]=t;
         }
         }
   }

  printf("actual data:\n");

   for(i=0;i<n;i++)
   {

       printf("%s\n",str[i]);
   }

   printf("new data:\n");


   for(i=0;i<n;i++)
   {
       printf("%s\n",p[i])   ;
   }
}

