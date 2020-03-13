#include<stdio.h>
void main()
{
  int i=0,j=0,k=1,b,m,l;
  printf("enter the no. of roea and coloms:");
  scanf("%d",&m);
  int a[m][m];
  b=m;
  while(b>0)
  {
    for(l=1;l<b;l++)
    {
      a[i][j]=k++;
      j++;
    }

    for(l=1;l<b;l++)
    {
      a[i][j]=k++;
      i++;
    }

    for(l=1;l<b;l++)
    {
      a[i][j]=k++;
      j--;
    }


    for(l=1;l<b;l++)
    {
      a[i][j]=k++;
      i--;
    }
    (m%2==1)?(a[m/2][m/2]=m*m):(a[m/2][m/2-1]=m*m);
    j++;i++;
    b=b-2;
  }

  for(i=0;i<m;i++)
  {
      for(j=0;j<m;j++)
      {
          printf("%6d",a[i][j]);
      }
      printf("\n");
  }
}
