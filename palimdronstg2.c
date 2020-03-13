#include<stdio.h>
int main()
{
  int i=0,j,n;
  char a[20];

  printf("enter the no:");
  scanf("%s",a);

  while(a[i]!='\0')
  {
      if(a[i]>=97&&a[i]<=123)
      {
          a[i]=a[i]-32;
      }
      i++;
  }

    for(j=0;j<i;)
    {
         if(a[--i]==a[j++])
         {
         printf("palimdron");
         exit(0);
         }
         else
         {
         printf("not palimadron");
         exit(0);
         }
      }



    }

