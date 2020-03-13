   #include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   int i=0,j,k;
  char stg1[25],stg2[10],stg3[10],stg4[10];

  printf("enter the first string:");
  gets(stg1);
  printf("enter the second string:");
  gets(stg2);
  printf("enter the third strin:");
  gets(stg3);

  strcat(stg1,stg2);
  puts(stg1);
  strcat(stg1,stg3);
  puts(stg1);

  while(stg1[i]!='\0')
    i++;

  if(i<=25)
  {
   printf("enter the branch name\n");
    scanf("%s",stg4);

    if(strncmp(stg4,"c",1)==0||strncmp(stg4,"i",1)==0||strncmp(stg4,"m",1)==0)
    {
        printf("welcome\n");
        printf("%c%c%c",stg1[0],stg2[0],stg3[0]);
    }

  }
}
