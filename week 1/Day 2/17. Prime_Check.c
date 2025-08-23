//Prime number check (prime_check.c)
#include<stdio.h>
int main()
{
	int n, i, temp=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n <=1 )
	{
		printf("Not a prime Number");
	}
	else
	{
		for(i=2; i<n; i++)
		{
			if(n%i==0)
			{
				temp = 1;
				break;
			}
		}
	}


	if(temp)
	{
		printf("Not a prime Number");
	}
	else
	{
		printf("Prime number!");
	}


	
	return 0;
}
