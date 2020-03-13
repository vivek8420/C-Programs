#include<stdio.h>
main()
{
     char word1[15];
     char word2[15];
     int i,j,flag=0;
     printf("Enter first word :");
     scanf("%s",word1);
     printf("Enter second word :");
     scanf("%s",word2);
     
     for(i=0;word1[i]!='\0';i++)
     {
        for(j=0;word2[j]!='\0';j++)
        {
           if(word1[i]==word2[j])
           {
                flag=0;
                break;   
           }
           else
           {
               flag=1;
           }
           
         }
         if(flag==1)
         {
           printf("words are not alingram");
           return 0;
         }
         
           
      }     
      printf("Enter words are alingram");
}
