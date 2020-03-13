#include<stdio.h>

void main()
{
    int i,j,n,k,p,q=0,flag=0;

    printf("enter the no:\n");
    scanf("%d",&n);

    k=n;

    for(i=2;i<k;i++)
    {
        q=0;
        n=k;

        for(p=i;;)
        {
           if(n%p==0)
           {
              q++;
              n=n/p;
            }
           else
               break;
        }




        if(n==1)
        {
           for(j=2;j<k;j++)
           {
             if(p%j==0&&p!=2)
                flag=1;
                break;
           }
        }


        if(n==1&&flag==0)
              break;
    }

    if(q>1)
    {
        printf("number is super primepower\n");
       printf("p=%d  q=%d",p,q);
    }
       else
        printf("number is not super primepower");
}
