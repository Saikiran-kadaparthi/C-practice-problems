//Neon Number Check (Neon_Check.c)
#include<stdio.h>
int main()
{
	int n, square, digit=0, sum=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	square= n*n;
	
	while(square > 0)
	{
		digit = square % 10;
		sum = sum + digit;
		square = square/10;	
	}
	
	if(sum == n)
	{
		printf("Given number is a neon Number!");
	}
	else
	{
		printf("Given number is not a neon Number!");
	}
	return 0;
}
