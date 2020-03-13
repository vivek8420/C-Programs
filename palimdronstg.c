#include<stdio.h>
int main()
{
  int i=0,j;
  char a[20];

  printf("enter the string:\n");
  scanf("%s",a);

  while(a[i]!='\0')
    i++;
  printf("%d",i);

  for(j=0;j<i;j++)
  {
    if(a[--i]==a[j++])
    {
       printf("string is palimdron");
       break;
    }
    else
      printf("string is not palimdron");
      break;
  }

}
