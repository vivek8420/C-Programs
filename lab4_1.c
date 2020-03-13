#include<stdio.h>

 struct
{
    char name[10];
    int exp;
    int salari;
    int id;
}a[10];

void main()
{
    int i;

    for(i=0;i<10;i++)
    {
       printf("enter the details of employee %d:\n",i);
      scanf("%s",a[i].name);
      printf("expereience:");
      scanf("%d",&a[i].exp);
      printf("salari");
      scanf("%d",&a[i].salari);
      printf("id");
      scanf("%d",&a[i].id);
    }
    printf("\n\n");

    for(i=0;i<10;i++)
    {
      if(a[i].exp>=7&&a[i].salari<=1200)
      {
       printf("%s\n",a[i].name);
       printf("%d ",a[i].exp);
       printf("%d  ",a[i].salari);
       printf("%d  ",a[i].id);
      }

    }




}
