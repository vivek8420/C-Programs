#include<stdio.h>
void main()
{
    char array[3][3],tmp;
    int k,j,i;

    for(i=0;i<9;i++)
    {
       printf("(k,j)=");
       scanf("%d" ,&k);
       scanf("%d\n",&j);
       printf("hello");
       scanf("%c",&tmp);
       array[k][j]=tmp;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d",array[i][j]);
        }
        printf("\n");
    }
}
