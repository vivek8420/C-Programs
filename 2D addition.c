#include<stdio.h>
int main()
{
     int v,p;
     printf("enter the both array size:");
    int a1[10][10]={0},a2[10][10]={0},a3[10][10]={0};

       for(v=0;v<3;v++)
       {
          for(p=0;p<3;p++)
          {
            scanf("%d ",&a1[p][v]);
            scanf("%d ",&a2[p][v]);
          }
          printf("\n");

       }

       for(v=0;v<3;v++)
       {
          for(p=0;p<3;p++)
          {
            a3[v][p]=a1[v][p]+a2[v][p];
            printf("%4d",a3[v][p]);
          }
          printf("\n");
       }
}
