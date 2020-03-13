#include<stdio.h>


int main()
{
  int array[3][10],product[3]={0},salesman[10]={0},value[]={50,100,200};
  int i,j,total;

  for(i=0;i<3;i++)
  {
      for(j=0;j<10;j++)
      {
          array[i][j]=value[i];
      }
  }

  for(i=0;i<10;i++)
  {
       total=0;
     for(j=0;j<3;j++)
     {
        total=total+array[j][i];
     }
     salesman[i]=total;
  }

  for( i=0;i<3;i++)
  {
       total=0;
       for(j=0;j<10;j++)
       {
         total=total+array[i][j];
       }
       product[i]=total;
  }

  for(i=0;i<10;i++)
  {
     printf("salesman(%d)=%d\n",i+1,salesman[i]);
  }

  for(i=0;i<3;i++)
  {
     printf("product(%d)=%d\n",i+1,product[i]);
  }

}
