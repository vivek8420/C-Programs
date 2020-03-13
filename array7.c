#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    int a[10]={98,45,32,98,45,25,14,12,76,14};
    printf("enter the no.you want delete that:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==a[i])
        {   k++;
            for(j=i;j<9;j++)
            {
                a[j]=a[j+1];
            }

        }
    }
    for(i=0;i<10-k;i++)
        printf("%d",a[i]);
}

