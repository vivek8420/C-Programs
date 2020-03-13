#include<stdio.h>


int fun(int,int);

void main()
{
    int x,y;

                    //exp(x,y)=x^y
    printf("enter the value of x & y :\n");
    scanf("%d\n",&x);
    scanf("%d\n",&y);
    printf("ans=%d",fun(x,y));

}

int fun(int x,int y)
{
     int ans;

     if(y==0)
        return 1;

     ans=x*fun(x,y-1);
     return(ans);
}
