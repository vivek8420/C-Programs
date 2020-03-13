#include<stdio.h>
int main()
{
  int i=0,j=0,k=0;
  char s1[10],s2[10],s3[20];

  printf("enter the two string:");
  scanf("%s %s",s1,s2);
  for(k=0;k<20;k++)
  {
      if(s1[j]!='\0'&&s2[i]!='\0')
      {
       if(k%2==0)
        s3[k]=s1[j++];
       else
         s3[k]=s2[i++];
      }
      else if(s2[i]=='\0')
        s3[k]=s1[j++];
      else
        s3[k]=s2[i++];
  }
  s3[k]='\0';
  printf("%s",s3);
}
