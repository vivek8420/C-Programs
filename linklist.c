#include<stdio.h>

 typedef struct n
 {
     int data;
     struct n *next;
 }node;

 node *q,*head=NULL;

 void print();
 void insert();
 int main()
 {
    insert();
     insert();
    insert();
    insert();
    print();
 }

 void print()
 {
    node *tmp;
    tmp=head;

    while(tmp!=NULL)
    {
       printf("%d\n",tmp->data);
       tmp=tmp->next;
    }
 }
//inser start
 /*void insert()
 {
    node *p=(node *)malloc(sizeof(node));
    printf("\n enter the data for new node:");
    scanf("%d\n",&p->data);

    p->next=NULL;
    p->next=head;
    head=p;
 }*/

 void insert()
 {
     node *p=(node *)malloc(sizeof(node));
     printf("enter the data for new node:");
     scanf("%d",&p->data);

     if(head==NULL)
     {
         head=p;
         q=p;
     }
     else
     q->next=p;

     q=p;
     p->next=NULL;
 }
