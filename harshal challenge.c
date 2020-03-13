#include<stdio.h>
#include<stdlib.h>
typedef struct vivek
{
  int data;
  struct node *next;
}node;

 node *head=NULL;
void create(int);
void print(node *);
void sort(int);

void main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
  create(n);

  printf("\n*****BEFORE SORTING*****\n");
  print(head);
  sort(n);
printf("\n*****AFTER SORTING*****\n");
  print(head);
}

void create(int n)
{
   if(n==0)
     return;
   node *p,*ptr;
  p=( node*)malloc(sizeof(node));
  p->next=NULL;

  printf("enter the data:");
  scanf("%d",&p->data);

  if(head==NULL)
    head=p;

  else
  {
     ptr=head;

     while(ptr->next!=NULL)
     {
        ptr=ptr->next;
     }
     ptr->next=p;
  }

  create(--n);
  return;
}

void print(node *ptr)
{
  if(ptr!=NULL)
  {
    printf("%d %u\n",ptr->data,ptr);
    print(ptr->next);
   }
   return;
}

void sort(int n)
{
     node *p,*p1,*p2,*head1=NULL;
     int i;
while(n--)
{
     p=head;
     p1=head;
    i=head->data;
   while(p!=NULL)
   {
       if(i > p->data)
       {
           i=p->data;
           p1=p;
       }
       p=p->next;
   }
   p2=head;
   while(p2->next!=p1&&p2!=p1)
      p2=p2->next;


   if(head->data==i)
        head=p2->next;

        p2->next=p1->next;

     p1->next=NULL;


    if(head1==NULL)
    {
        head1=p1;
        continue;
    }

    p2=head1;

    while(p2->next!=NULL)
        p2=p2->next;

    p2->next=p1;
}
   head=head1;
}
