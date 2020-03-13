#include<stdio.h>
#include<stdlib.h>
typedef struct n
{
   int id;
   char nm[10];
   float cpi;
   struct n *next;
}node;

node *head=NULL;
void print(node *);
void insert(int);
void data(node *);

main()
{
    int n;
    printf("enter the no of student n:\n");
    scanf("%d",&n);

   insert(n);
printf("\n\n******SORTING DATA******\n");
   print(head);
}

void data(node *p)
{
    printf("enter the data id name cpi:\n");
    scanf("%d",&p->id);
    scanf("%s",p->nm);
    scanf("%f",&p->cpi);
    p->next=NULL;
}

void insert(int n)
{
    if(n==0)
        return;
    node *q,*pre,*p;
       p=(node *)malloc(sizeof(node));
      data(p);


  if(head==NULL||p->id<head->id)
  {       p->next=head;
           head=p;

           insert(--n);
           return;
  }
       q=head;
       pre=head;

    while((q->id)<(p->id))
    {
           pre=q;
           if(q->next==NULL)break;

            q=q->next;
    }

      pre->next=p;
      p->next=q;

       insert(--n);
        return;
}

void print(node *p)
{
   if(p!=NULL)
   {
       printf("%d %s %f\n",p->id,p->nm,p->cpi);
       print(p->next);
   }
   return;
}
