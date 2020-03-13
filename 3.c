#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	FILE *fp=fopen("x.txt","x");
	char c;
	c=fgetc(fp);
	while(c!=EOF)
	{
		c=fgetc(fp);
		c=c+n;
		fputc(c,fp);
	}
	fclose(fp);
}


