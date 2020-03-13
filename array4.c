#include<stdio.h>
void main()
{
float a[10];
int i,search,flag=0;
for(i=0;i<10;i++)
{
       scanf("%f",&a[i]);
}
printf("enter the number by user");
scanf("%d",&search);
for(i=0;i<10;i++)
{
    if(a[i]==search-09
    {
    printf("index %f",a[i]);
    flag=1;
    exit(0);
    }
}
if(flag==1)
printf("error");
}
