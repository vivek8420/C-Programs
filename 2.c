#include<stdio.h>

int main()
{	
	long long int n,i,a[60];
	scanf("%lld",&n);
	a[0]=a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%lld",a[n-1]);
}
