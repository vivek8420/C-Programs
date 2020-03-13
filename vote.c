#include<stdio.h>
int main()
{ 
 int i,n,j;
 do
 {
  int a[8]={0},max=0;
  printf(" enter the no.0-7 for voting...");
  printf("\n");	
  printf("0 means nota \n");
  while(1)
  {
    
    printf("enter the no.for vote:");
    scanf("%d",&n);
    if(n>=8)
    break;
    a[n]++;
  }
  for(i=0;i<8;i++)
  {
    if(i==0)
    max=a[i];
    
    if(a[i]>max)
    {
    j=i;
    max=a[i];
   }
 }  
   printf("winner is %d",j);
  } 
   while(j==0);
 }  
   
   
  
    
