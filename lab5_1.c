#include<stdio.h>
void fun(int *,int *);
int main()
{
   int x,y,*a=&x,*b=&y;
   
   printf("enter ther value of x and y:\n");
   scanf("%d %d",&x,&y);
   
   fun(a,b);
   printf("new value x &y:\n");
    printf("%d %d",*a,*b);

}
void fun(int *a,int *b)
{
     int x,y;
     x=*a;
     y=*b;
     
     a=&y;
     b=&x;
     printf("%d %d",*a,*b);
     
}
       
    
    


