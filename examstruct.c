#include<stdio.h>


void main()
{
    double a[3][3],*p,(*q)[3],(*s)[3][3],i;
    p=&a;
    q=&a[0];
    s=&a[0][0];

        for(i=0;i<3;i++)
        {
         printf("%u  %u  %u",p++,q++,s++);
         printf("\n");
         printf("%d",sizeof(q));
        }

}
