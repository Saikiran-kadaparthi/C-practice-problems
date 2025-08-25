//Count Digits in a Number (Count_Digits.c)

#include<stdio.h>
int main()
{
	int n,count=0;
	
	printf("Enter A number : ");
	scanf("%d", &n);
	
	while (n>0)
	{
		count++;
		n /= 10;
	}
	
	printf("%d Digits", count);
	return 0;
}
