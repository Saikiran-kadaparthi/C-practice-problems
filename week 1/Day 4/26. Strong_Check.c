//Strong Number Check (Strong_Check.c)
 
#include<stdio.h>
int main()
{
	int i,temp,n,sumoffact=1,digit, total=0;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(temp!=0)
	{
		digit = temp%10;
		
		for(i=1;i<=digit;i++)
		{
			sumoffact = sumoffact * i;
		}
		temp = temp/10;
		total = total + sumoffact;
		sumoffact=1;

	}
	
	if(n==total)
	{
		printf("Given number is a Strong number!");
	}
	else
	{
		printf("Given number isn't a Strong numer!");
	}
	
	return 0;
	
}
