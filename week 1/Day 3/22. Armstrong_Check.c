//Check Armstrong Number (Armstrong_Check.c)
#include<stdio.h>
#include<math.h>
int main(){
	int n, temp, digit, result=0, count=0;
	
	printf("Enter a Number : ");
	scanf("%d", &n);
	
	temp=n;
	
	while(temp > 0)
	{
		count++;
		temp = temp/10;
		
	}
	
	temp=n;
	
	while(temp>0)
	{
		digit = temp %10;
		result += pow(digit, count);	
		temp /= 10;

	}
	
	if(n==result)
	{
		printf("%d is an Armstrong number",n);
	}
	else
	{
		printf("%d is not an Armstrong number",n);
	}
	
	return 0;
}
