   #include<stdio.h>
#include<string.h>


int count(char [],char []);

void main()
{
    int i;
    char str1[20],str2[20];

    printf("enter the source string:\n");
    gets(str1);

    printf("enter the sub string:\n");
    gets(str2);

    printf("occurance=%d",count(str1,str2));
}

int count(char str1[],char str2[])
{
    int i,j,t,k;

    t=strlen(str2);
    k=strstr(str1,"");
    j=strstr(str1,str2);

    for(i=0;j!=0;i++)
    {
        j=j-k;

        j=strstr(&str1[j+t],str2);
    }
    return(i);
}





