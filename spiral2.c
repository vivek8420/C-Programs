#include<stdio.h>
int main()
{
  int i=0,j=0,k=1,a,b,l,p,q;

  printf("enter the no of row and coloum:");
  scanf("%d %d",&p,&q);
  b=p-1;
  a=q;

  int v[p][q];

  while(a>0&&b>0)
  {
    for(l=0;l<a;l++)
    {
      v[i][j]=k++;
      j++;
    }
    a--;j--;i++;

    for(l=0;l<b;l++)
    {
      v[i][j]=k++;
      i++;
    }
    i--;b--;

    for(l=0;l<a;l++)
    {
     v[i][j-1]=k++;
     j--;
    }
    a--;
    for(l=0;l<b;l++)
    {
     v[i-1][j]=k++;
     i--;
    }
    b--;j++;
  }

  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
     printf("%4d",v[i][j]);
    }
    printf("\n");
  }
}
