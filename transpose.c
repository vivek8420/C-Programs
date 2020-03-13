#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("enter the size of array:");
    scanf("%d",&n);
    int a1[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a1[j][i]);
        }
        printf("\n");
    }
    return 0;


}
