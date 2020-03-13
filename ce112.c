#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i,j,n,m;
	char a[20],b[20];
	printf("Enter First String: ");
	scanf("%s",a);
	printf("Enter Second String: ");
	scanf("%s",b);
	n=strlen(a);
	m=strlen(b);
	
	if(n != m)
	{
		printf("They Are Of Different Length...");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i] == b[j])
			break;
		}
		if(a[i] != b[j])
		{
			printf("They Are Not Anagram...");
			exit(0);
		}
	}
	printf("They Are Anagram..");

	FILE *fp;
	fp=fopen("dictionary.txt","r");
	if((fscanf(fp,"%s",a)) != EOF)
	{
	printf("First String is Present in Dictionary..");
	}
	else
	{
	printf("First String is Not Present In Dictionary...");
	}
	printf("\n");
	if((fscanf(fp,"%s",b)) != EOF)
	{
	printf("Second String is Present in Dictionary..");
	}
	else
	{
	printf("Second string is Not Present In Dictionary...");
	}
	printf("\n"); 
}
	 

