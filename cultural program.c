#include<stdio.h>
#define ll long
    struct abc
    {
        ll int in;
        ll int out;
    };
    int main()
    {
    ll int e,i,j,count=0;
    scanf("%ld",&e);
    struct abc entry[e];
    for(i=0;i<e;i++)
    {
        scanf("%ld %ld",&entry[i].in,&entry[i].out);
    }
    int flag=0;
    for(i=0;i<e-1;i++)
    {
        for(j=i;j<e-1;j++)
        {
            if(entry[i].out>entry[j].in)
                     flag=1;
            else
            {   flag=0;
                entry[j].in=0;
                break;
            }
       }
       if(flag==1)
         count++;
    }
    printf("%ld",count);
}
