//Harshad Number Check (Harshad_Check.c)
#include<stdio.h>
int main()
{
	int n, temp, digit, sum = 0;
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	temp = n;
	
	while(temp > 0)
	{
		digit = temp %10;
		sum += digit;
		temp /= 10;
	}
	
	if(n%sum == 0)
	{
		printf("Given number is a Harshad Number!");
	}
	else
	{
		printf("Given number is Not a Harshad Number!");

	}
	return 0;
	
}
