#include<stdio.h>
void bubble(int [],int);
void array(int [],int);
void print(int [],int);


int main()
{
 int n;

 printf("entr the value of no:\n");
  scanf("%d",&n);
   int a[n];
  array(a,n);
  bubble(a,n);
  print(a,n);

}

void array(int a[],int n)
{
  int i;
 printf("enter the value:\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
}

void bubble(int a[],int n)
{
  int i,j,flag;
  
  for(i=0;i<n;i++)
  {
     for(j=0;j<n-1;j++)
     {  
      if(a[j]>a[j+1])
      { 
        flag=a[j];
       a[j]=a[j+1];
       a[j+1]=flag;
      }
    }
 }
}

void print(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
   { 
     printf("%4d",a[i]);
   }
}        


 
