
#include<stdio.h>
#include<time.h>

int main()
{
    clock_t start_t,end_t;
    int i,j;
    start_t=clock();
    for(i=0;i<10;i++)
    {
        printf("vivek\n");

        end_t=clock();
         printf("%f",end_t);
        j=(int)(end_t-start_t);

        if(j==1)
        {
            printf("over");
            break;
        }


    }

}
