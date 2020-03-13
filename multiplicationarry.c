#include<stdio.h>
int main()
{
  int a1[3][3]={0},a2[3][3]={0},a3[3][3]={0};
    int i=0,j=0,k=0,l=0,sum=0;

  printf("enter the value of array1.\n ");

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("(%d,%d)=",i,j);
        scanf("%d",&a1[i][j]);
      }
  }
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
         printf("%4d",a1[i][j]);
      }
      printf("\n");
  }

  printf("enter the value of arry2;");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("(%d,%d)=",i,j);
          scanf("%d",&a2[i][j]);
      }
  }
    for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("%4d",a2[i][j]);
      }
      printf("\n");
  }

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
      sum=0;
      for(k=0;k<3;k++)
      {
          sum=sum+a1[i][k]*a2[k][j];
      }
      a3[i][j]=sum;
      printf("%4d",a3[i][j]);
      }
      printf("\n");
  }
}
