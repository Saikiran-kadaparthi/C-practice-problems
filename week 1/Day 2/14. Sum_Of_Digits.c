//Find sum of digits of a number (sum_of_digits.c)
#include<stdio.h>
int main()
{
	int n, sum=0, temp;
	
	printf("Enter a number to Find the sum of digits : ");
	scanf("%d",&n);
	
	if(n<0){
	n = -n;
	}
	

	while (n>0)
	{	
		temp = n%10;
		sum += temp;
		n = n/10;
		
	}
		
	printf("%d",sum);
	return 0;
}
