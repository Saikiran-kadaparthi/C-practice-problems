//Check Abundant Number (Abundant_Check.c)
#include<stdio.h>
int main()
{
	int sum = 0, i , n;
	
	printf("Enter a numbe : ");
	scanf("%d",&n);
	
	for(i=1; i<=n/2; i++)
	{
		if(n%2==0)
		{
			sum = sum+i;
		}
	}
	
	if(sum > n)
	{
		printf("Given number is a Abundant!");
	}
	else
	{
		printf("Given number isn't a Abundant!");
	}

	return 0;
}
