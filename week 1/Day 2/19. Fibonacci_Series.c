//Fibonacci series up to N terms (fibonacci_series.c)
#include<stdio.h>
int main()
{
	int n, i, first = 0, second = 1, temp=0;
	
	printf("Give the number N : ");
	scanf("%d", &n);
	
	if (n >= 1)
	{
		printf("\n%d", first);
	}	
	if (n >= 2)
	{
		printf("\n%d", second);
	}
		
	for(i=2; i<n; i++)
	{
		temp = first + second;
		first = second;
		second = temp;
		printf("\n%d", temp);
	}
	
	return 0;
	
}
