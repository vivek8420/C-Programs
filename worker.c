#include <stdio.h>
int main(void)
{
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);

     int b[n];
   long int a[n],t=100000,v=100000,p=100000;
        printf("enter the value of a:");
    for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
printf("enter the value of b:");

    for(i=0;i<n;i++)
       scanf("%d",&b[i]);

    for(i=0;i<n;i++)
    {
        if(b[i]==1)
        {   if(a[i]<t)
               t=a[i];
               continue;
        }
      else if(b[i]==2)
        {
             if(a[i]<v)
               v=a[i];
               continue;
        }
    else
        {
            if(a[i]<p)
               p=a[i];
        }
    }
    printf("%ld %ld %ld\n",t,v,a[4]);
    if(((t+v)<p)&&t!=0&&v!=0)
          printf("%ld",t+v);

    else
         printf("%ld",p);

}

