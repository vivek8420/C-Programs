#include<stdio.h>
#define sc(x) scanf("%d",&x)
int main()
{
    int t;
    sc(t);
    while(t--)
    {
      int x,y,k,n,flag=0,i;
      sc(x);sc(y);sc(k);sc(n);
      for(i=0;i<n;i++)
      {
          int p,q;
         scanf("%d %d",&p,&q);

         if(q<=k &&p>=x-y)
            {
              flag=1;
            }
      }
      if(flag==1)
        printf("LuckyChef\n");
        else
         printf("UnluckyChef\n");
    }
}
