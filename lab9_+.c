#include<string.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct n
{
  int data;
  struct n *next;
}node;

void insert();
void print();

node *head=NULL;
int main()
{
node *p;
insert();
insert();
insert();
insert();
print();
   
}
node *q=NULL;
void insert()
{
  node *p=(node *)malloc(sizeof(node));
  printf("enter the data for new node:\n");
  scanf("%d",&p->data);
   
   if(head==NULL)
   {
      head=p;q=p;
      return;
   }
     q->next=p;
     q=p;
     p->next=NULL;
}

void print()
{
node *t;
t=head;
 while(t!=NULL)
 {
   printf("%d\n",t->data);
   t=t->next;
 }
}
