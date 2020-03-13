#include<stdio.h>
#include<string.h>
void main()
{
  char str1[20],str2[20],*p1,*p2,*ptr,str3[20];
  
  printf("enter the first string:\n");
  gets(str1);
  
  printf("enter the second string:\n");
  gets(str2);
  
  p1=str1;
  p2=str2;
  
  int i,l1=strlen(str1),l2=strlen(str2);
  int flag=1;
  
  ptr=strchr(p1,*p2);
     if(ptr!=NULL)
     {   
          for(i=1;i<l2;i++)
          {
              if(*(ptr+i)==*(p2+i)&& *(ptr+i)!='\0')
              {
              flag=0;
              }
              else if(*(ptr+i)=='\0')
              {
                 ptr=p1;
                 
                 
                 
                 if(*(p2+i)==*(ptr))
                 {
                    flag=0;
                  }
                   else
                   {
                    flag=1;
                    break;
                   }
               }
               
               else
               {
                 flag=1;
                    break;
                }    
              }     
                   
          }
           
     else
       printf("string is not anagram");
    
    if(flag==0)
      printf("string is sequence and anagram");
    else
       printf("string is not sequence");
       
       
       
       
}
