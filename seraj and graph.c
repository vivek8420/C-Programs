#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,m,flag=0,i,j,k;
        scanf("%d %d",&n,&m);

        int a[111][2],b[111],p;

        for( i=1;i<=m;i++)
           scanf("%d %d",&a[i][0],&a[i][1]);

        if(n%2==1)
        {
          printf("NO\n");
          continue;
        }

        for( k=1,i=1;k<=m;k++)
        {
             if(k%2==1)
               p=a[i][0];
            else
               p=a[i++][1];

               b[p]++;

            for(j=1;j<=m;j++)
            {
                if((a[j][0]==p||a[j][1]==p)&&j!=i)
                 {
                     a[j][0]=a[j][1]=0;
                 }
            }
        }

            for(i=1;i<=n;i++)
            {
                 if(b[i]!=1)
                   {
                      printf("NO\n");
                       flag=1;
                       break;
                   }
            }
            if(flag==0)
              printf("YES\n");
    }
	return 0;
}



