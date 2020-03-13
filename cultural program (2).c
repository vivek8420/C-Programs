#include <stdio.h>

int a[10000001],b[10000001];

int main(void)
{
	long int i,j,n;
	scanf("%ld",&n);
	for(i=0;i<=10000000;i++)
	a[i]=0,b[i]=0;
	for(i=0;i<n;i++)
	{
		long int temp1,temp2;
		scanf("%ld%ld",&temp1,&temp2);
		b[temp1]=1;
		a[temp2]++;
	}
	long int ans=0,count=0;
	for(i=0;i<=10000000;i++)
	{
		if(b[i]==1)
		count++;
		if(ans<count)
		ans=count;
		if(a[i]!=0)
		count-=a[i];
	//	if(i<=10)
	//	printf("%ld:%ld\n",i,count);
	}
	printf("%ld\n",ans);
	return 0;
}

