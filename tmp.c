#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j,y,z,k,tmp;

    printf("enter the value of m:\n");
    scanf("%d",&m);
    printf("enter the value of n:\n");
    scanf("%d",&n);

    printf("enter the value of y:\n");
    scanf("%d",&y);
    printf("enter the value of z:\n");
    scanf("%d",&z);

    int a1[m][n],a2[y][z],a3[m][z];
    printf("enter the first array:\n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              scanf("%d",&a1[i][j]);
          }
      }
      printf("enter the second array:\n");

      for(i=0;i<y;i++)
      {
          for(j=0;j<z;j++)
          {
              scanf("%d",&a2[i][j]);

          }
      }

      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%4d",a1[i][j]);
          }
          printf("\n");
      }
      printf("\n\n");
      for(i=0;i<y;i++)
      {
          for(j=0;j<z;j++)
          {
              printf("%4d",a2[i][j]);
          }
          printf("\n");
      }
      printf("\n\n");
       if(n!=y)
      {
          printf("mathamatically error");
          exit(0);
      }

      for(i=0;i<m;i++)
      {

          for(j=0;j<z;j++)
          {
              tmp=0;
              for(k=0;k<m;k++)
              {
                  tmp=tmp+a1[i][k]*a2[k][j];
              }
              a3[i][j]=tmp;
          }
      }

      for(i=0;i<m;i++)
      {
          for(j=0;j<z;j++)
          {
              printf("%4d",a3[i][j]);
          }
          printf("\n");
      }
}

