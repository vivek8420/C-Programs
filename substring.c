#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char stg1[10],stg2[10],x;
  printf("enter the two string:");
  scanf("%[^\n]",stg1);
  fflush(NULL);
  scanf("%c",&x);
  printf("enter the second string:");
  scanf("%s",stg2);
  
   	if(strstr(stg1,stg2))
   	{
   	  printf("string is sub string");
   	}
   	else
   	printf("string is not sub string");


}
