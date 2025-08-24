//Perfect Number Check (Perfect_Check.c)
#include<stdio.h>
int main()
{
	int i, n, result=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
		
	for(i=1;i<n;i++)
	{
		if(n % i == 0)
		{
			result += i; 
		}
		
	}

	if(n == result)
	{
		printf("\n%d is a perfect number",n);
	}
	else
	{
		printf("\n%d is not a perfect number", n);

	}
	return 0;
}
