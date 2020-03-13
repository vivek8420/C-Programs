#include<stdio.h>
int main()
{
  int wrong[25];
  char input[25],output[25],i,j=0,mark=0;

  printf("enter the input string:\n");
  scanf("%s",input);

  printf("enter the output string:\n");
  scanf("%s",output);

  for(i=0;i<25;i++)
  {
    if(input[i]==output[i])
    {
     mark++;
    }
    else
    wrong[j++]=i+1;
  }
  printf("mark is %d out of 25",mark);
  for(i=0;i<j;i++)
  printf("%2d",wrong[i]);
}
