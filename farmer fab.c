#include <stdio.h>
int main(void)
{
int x,y,i,t,p,flag;
scanf("%d",&t);
while(t--)
{
    flag=1;
scanf("%d %d",&x,&y);
p=x+y+1;
 while(flag==1)
 {
    for(i=2;i<p;i++)
      {   if(p%i==0)
          {
              p++;
              flag=1;
            break;
          }
          flag=0;
       }
 }
 printf("%d\n",p-x-y);
}
}
