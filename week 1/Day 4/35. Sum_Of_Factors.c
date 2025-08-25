//Sum of Factors (Sum_Of_Factors.c)
#include<stdio.h>
int main()
{
	int i, n , sum=0;
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n/2; i++)
	{
		if(n%i == 0)
		{
			sum = sum+i;
		}
	}
	sum = sum +n;
	printf("Sum of factors of %d is %d", n , sum);
	return 0;
}
