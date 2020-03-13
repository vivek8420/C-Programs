#include<stdio.h>

int main()
{
  long int i,T,N,sum=0;

  scanf("%ld",&T);

  while(T--)
  {
      sum=0;
  scanf("%ld",&N);
  long int a[N];
       for(i=0;i<N;i++)
       {
           scanf("%ld",&a[i]);
            sum=sum+a[i];
        }

            if(sum%2==1)
               printf("YES");
            else
                printf("NO");
   }

   return 0;
}




