#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
	char s1[10],s2[10],s[30];
	int i=0,j=0,n,m,flag;
	FILE *fp;
	fp=fopen("dix.txt","r");
	printf("Enetr 1st string:\n");
	scanf("%s",s1);
	printf("Enter 2nd string:\n");
	scanf("%s",s2);
	n=strlen(s1);
	m=strlen(s2);
	if(n!=m)
	{
		printf("error input will be same size");
		exit(0);
	}
	while(s1[i]!='\0')
	{
		if(s1[i]!=s2[j])
		{
			while(s2[j+1]!='\0')
			{
				if(s1[i]!=s2[j+1])
				{
					flag=0;
					j++;
				}
				else
				{
					flag=1;
				}
				if(flag==1)
					break;
			}
		}
		else
			flag=1;
		i++;
	}
	if(flag==1)
	{
		printf("strings are anagram");
	}
	else
		printf("strings are not anagram");
	while(feof(fp)!=NULL)
	{
		strcpy(*fp,t);
	}	
        while((feof(fp)!=NULL))
        {
        	if(strstr(s,s2)>0)
        	{
        		printf("string is there");
        	}
        	else
        		printf("not found");
        }
 }	

