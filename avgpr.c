#include <stdio.h>

int main(void)
{
int t;
 long long int n,i,j,count,p;
 double sum;
 scanf("%d",&t);
while(t--)
{
    count=0;sum=0;

    scanf("%lld",&n);
    printf("N=%lld\n",n);
    long int a[n];
    for(i=0;i<n;i++)
         scanf("%ld",&a[i]);

      printf("a= %ld %ld\n",a[1],a[2]);

         for(i=0;i<n-1;i++)
         {
              for(j=i+1;j<n;j++)
              {
                sum=a[i]+a[j];
                sum=sum/2;
                  printf("sum=%lf\n",sum);

                for(p=0;p<n;p++)
                {

                    if(sum==a[p])
                    {
                        count++;
                        break;
                    }
                }
              }

         }
    printf("%lld",count);


}
}


