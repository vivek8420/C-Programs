#include<stdio.h>

struct vivek
{
   int n1;
   int n2;
   int ans;
};

int main()
{
    int t,i;

    printf("enter the total test cases:\n");
    scanf("%d",&t);

    struct vivek a[t];

    for(i=0;i<t;i++)
    {
         scanf("%d %d",&a[i].n1,&a[i].n2);
         a[i].ans=a[i].n1+a[i].n2;
    }
    printf("\n\n");

    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i].ans);\
    }
}
