#include<stdio.h>
int mystrlen(char *p)
{
	int i,count=0;
	for (i=0;*(p+i)!='\0';i++)
	{
	count++;
	}
	return(count);
}
char * mystrcpy (char *p,char *q)
{
	int i;
	for (i=0;*(q+i)!='\0';i++)
	{
	*(p+i)=*(q+i);
	}
	*(p+i)='\0';
	return (p);
}
int mystrcmp (char *p,char *q)
{
	int i;
	for (i=0;*(p+i)!='\0'&& *(q+i)!='\0';i++)
	{
	 if (*(p+i)!=*(q+i))
	 {
	 return(*(p+i)-*(q+i));

	 }

	}
	return(0);
}
char * mystrncpy (char *p,char *q,int n)
{
	int i;
	for (i=0;*(q+i)!='\0'&& i<n;i++)
	{
	*(p+i)=*(q+i);
	}
	*(p+i)='\0';
	return (p);
}
int mystrncmp (char *p,char *q,int n)
{
	int i;
	for (i=0;*(p+i)!='\0'&& *(q+i)!='\0' && i<n ;i++)
	{
	 if (*(p+i)!=*(q+i))
	 {
	 return(*(p+i)-*(q+i));

	 }

	}
	return(0);
}


char* mystrstr(char *str, char *substr)
{
	  while (*str)
	  {
		    char *Begin = str;
		    char *pattern = substr;

		    // If first character of sub string match, check for whole string
		    while (*str && *pattern && *str == *pattern)
			{
			      str++;
			      pattern++;
		    }
		    // If complete sub string match, return starting address
		    if (!*pattern)
		    	  return Begin;

		    str = Begin + 1;	// Increament main string
	  }
	  return NULL;
}






main()
{
int len,choise,res,n,v;
char *p;
char str[100],str1[100],str2[100];
printf ("1.strlen\n2.strcpy\n3.strcmp\n4.strncpy\n5.strncmp\n6.strstr\n\nENTER YOUR CHOISE");
scanf ("%d",&choise);
switch (choise)
{
case 1: printf("enter the string");
		scanf("%s",str);
		len=mystrlen(&str[0]);
		printf ("%d",len);break;
case 2: printf ("enter the 1st string");
		scanf ("%s",str1);
		printf ("enter the second string");
		scanf ("%s",str2);
		p=mystrcpy(str1,str2);
		printf ("%s%s",str1,str2);break;
case 3: printf ("enter the 1st string");
		scanf ("%s",str1);
		printf ("enter the second string");
		scanf ("%s",str2);
		res=mystrcmp(str1,str2);
		printf ("%d",res);break;
case 4: printf ("ENTER THE 1ST STRING");
		scanf ("%s",str1);
		printf ("enter the second string");
		scanf ("%s",str2);
		printf ("enter the no.of charcter");
		scanf ("%d",&n);
		p=mystrncpy(str1,str2,n);
		printf ("%s\n%s",str1,str2);break;
case 5: printf ("ENTER THE 1ST STRING");
		scanf ("%s",str1);
		printf ("enter the second string");
		scanf ("%s",str2);
		printf ("enter the no.of charcter");
		scanf ("%d",&n);
		n=mystrncmp(str1,str2,n);
		printf ("%d",n);
case 6:
		printf ("ENTER THE 1ST STRING");
		scanf("%s",str1);
		printf ("enter the second string");
		scanf("%s",str2);
		v=mystrstr(str1,str2);
		printf("%d",*v);

}
}
