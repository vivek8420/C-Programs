#include<stdio.h>

int main()
{
	int n,i,temp,fa=0;
	scanf("%d",&n);
	temp=n;
	int a,b,c;
	if(n==1000)
	{
		printf("M");
		return 0;
	}
	else
	{
		a=n%10;
		n=n-n%10;
		b=n%100;
		c=n-n%100;
		if(c>500)
		{
			if(c==900)
			{
				printf("CM");
				 	
			}
			
			else{
				printf("D");
				c-=500;
				for(i=c;i>0;i-=100)
				{
					printf("C");
				}			
			}
			
		}
		else if(c!=0)
		{
			if(c==400)
			{
				printf("CD");
			}
			else
			{
				for(i=c;i>0;i-=100)
				{
					printf("C");
				}			
			}
			
		}
		if(b>50)
		{
			if(b==90)
			{
				printf("XC");
				
			}
			else
			{
				printf("L");
				b-=50;
				for(i=b;i>0;i-=10)
				{
					printf("X");
				}
			}
			
		}
		
		else if(b!=0)
		{
			if(b==40)
			{
				printf("XL");
				
				
			}
			else
			{
				for(i=b;i>0;i-=10)
				{
					printf("X");
				}
			
			}
		}
		if(a>5)
		{
			if(a<9)
			{
				printf("V");
				for(i=a-5;i>0;i--)
				{
					printf("I");
				}					
			}
			else
			{
				
				{
					printf("IX");
				}
				
			}
			
		}
		else if(a!=0)
		{
			if(a==4)
				printf("IV");
			else
			{
				for(i=a;i>0;i--)
				{
					printf("I");
				}	
			}
		}
	}
}
