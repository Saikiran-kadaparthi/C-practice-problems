//Check if a number is even or odd (even_or_odd.c).
#include<stdio.h>
int main()
{
	int N;
	
	printf("Enter a number : ");
	scanf("%d", &N);
	
	if(N==0)
	{
		printf("Given Number is Even");
	}
	
	else if(N%2==0)
	{
		printf("Given Number is Even");
	}
	else
	{
		printf("Given Number is Odd");
	}
	
	return 0;
	
}
