#include<stdio.h>
#define N 3

struct a
{
     char nm[20];
     int id;
     int mark[3];
     int total;
}stu[N];

void cal(struct a *[]);
void sort(struct a *[]);
void print(struct a *[]);

int main()
{
     int i,j;

     struct a *ptr[N];

     for(i=0;i<N;i++)
     {
         ptr[i]=&stu[i];

         printf("enter the detais of student %d:\n\n\n",i+1);

         printf("enter the name:");
         scanf("%s",ptr[i]->nm);
         printf("\n");

         printf("enter the id:");
         scanf("%d",&ptr[i]->id);
         printf("\n");

         printf("enter the marks:\n");

             printf("CP=");
             scanf("%d",&ptr[i]->mark[0]);

             printf("MATHS=");
             scanf("%d",&ptr[i]->mark[1]);

             printf("BEEE=");
             scanf("%d",&ptr[i]->mark[2]);
         printf("\n\n\n");
     }



     cal(&ptr);

     printf("**********RESULT TABLE***********\n\n\n");

     print(&ptr);
printf("\n\n********SORTIN RESULT TABLE BY TOTAL MARK****************\n\n");
     sort(&ptr);
      printf("   name      id        CP       MATHS      BEEE     TOTAL\n");

     for(i=0;i<N;i++)
     {
        printf("%7s  %7d  %7d  %7d  %9d  %8d\n",ptr[i]->nm,ptr[i]->id,ptr[i]->mark[0],ptr[i]->mark[1],ptr[i]->mark[2],ptr[i]->total);
     }
}


void cal(struct a *ptr[N])
{
    int i;

    for(i=0;i<N;i++)
    {
      ptr[i]->total=ptr[i]->mark[0]+ptr[i]->mark[1]+ptr[i]->mark[2];
    }

}


void print(struct a *ptr[N])
{
    int i;
   printf("   name      id        CP       MATHS      BEEE     TOTAL\n");

   for(i=0;i<N;i++)
   {
       printf("%7s  %7d  %7d  %7d  %9d  %8d\n",ptr[i]->nm,ptr[i]->id,ptr[i]->mark[0],ptr[i]->mark[1],ptr[i]->mark[2],ptr[i]->total);
   }

}

 void sort(struct a *ptr[N])
{
    int i,j;
    struct a *t;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(ptr[j]->total<ptr[j+1]->total)
            {
                t=ptr[j];
             ptr[j]=ptr[j+1];
             ptr[j+1]=t;
            }
        }
    }
}
