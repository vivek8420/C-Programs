#include<stdio.h>
#include<stdlib.h>

char * createMemory(char *,int );
void sort(char *[],int);
int main()
{
    int i,n,j=0;
    char *ptr;

    ptr=(char *)calloc(20,1);

    printf("enter the string\n");
    scanf("%s",ptr);
    i=0;

    while(1)
    {
        i++;

         printf("enter your ans(0-no & 1-yes):\n");v
          scanf("%d",&n);

          if(!n)
             break;

            ptr=createMemory(ptr,i);
    }

char *a[i];

    while(j<i)
    {
        a[j++]=ptr;

        while(*ptr != '\0')
            ptr++;

        ptr++;
    }
    j=0;
  while(j<i)
  {
    printf("%s\n",a[j]);
    j++;
  }

  sort(a,i);

  printf("******SORTIN DATA******\n");
  j=0;
  while(j<i)
  {
      printf("%s\n",a[j]);
      j++;
  }
}

char * createMemory(char *ptr,int a)
{
  char *ptr1;
  ptr=(char *)realloc(ptr,40*a);
  ptr1=ptr;
      while(*ptr !='\0'||*(ptr+1)!='\0')
        ptr++;

       // printf("%u %u\n",ptr1,ptr);

      ptr++;
     char *p=ptr;

     printf("enter the string:\n");
     scanf("%s",p);

  return ptr1;
}

void sort(char *a[],int n)
{
    int i,j,p;
    char *tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            p=strcmp(a[j],a[j+1]);

            if(p>0)
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

}
