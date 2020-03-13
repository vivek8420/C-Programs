
#include<stdio.h>
 typedef struct point
{
  int x,y;
}p;
struct rect
{
 int l,h;
  p p4;
};



p addpoint(p,p);
void ptinrect(struct rect,p);

int main()
{
   p p1,p2,p3,p5;
   struct rect v;
  
  printf("enter the p1:");
  scanf("%d  %d",&p1.x,&p1.y);
  printf("enter the p2:");
  scanf("%d %d",&p2.x,&p2.y);
  p3=addpoint(p1,p2);
  
  printf("enter the value of v:");
  
  printf("enter value of l & h:");
  scanf("%d %d",&v.l,&v.h);
  printf("enter the starting point point:");
  scanf("%d %d",&v.p4.x,&v.p4.y);
  
  printf("enter the point:");
  scanf("%d %d",&p5.x,&p5.y);
  
  printf("value of p3=(%d,%d)\n",p3.x,p3.y);
  ptinrect(v,p5);
}

p addpoint(p p1,p p2)
{   p p3;
  p3.x=p1.x+p2.x;
  p3.y=p1.y+p1.y;
  return p3;
}


void ptinrect(struct rect v,p p5)
{
   if(p5.x>v.l+v.p4.x||p5.y>v.h+v.p4.y)
   {
     printf("point outside the rectangle");
   }
   else if(p5.x==v.p4.x||p5.x==v.l+v.p4.x||p5.y==v.p4.y||p5.y==v.h+v.p4.y)
   {
     printf("point on the rectangle" );
   }
  else
  {
    printf("point inside the rectangle");
  }

}
