#include <stdio.h>

int main(int argc,char *argv[])
{
   int count=1;
   FILE *fp1,*fp2;
    char c;
   fp1=fopen("avgpr.o","r");
   fp2=fopen(argv[2],"w+");
   /*while(c=getchar()!=EOF)
   {
     put(c,fp1);
   }*/
   while(c=getc(fp1)!=EOF)
   {
       if(c=='\n')
         count++;

         if(count%2==1)
           putc(c,fp2);
   }
   fclose(fp1);

   rewind(fp2);

   while(c=getc(fp2)!=EOF)
   {
     printf("%c",c);
   }
   fclose(fp2);
}
