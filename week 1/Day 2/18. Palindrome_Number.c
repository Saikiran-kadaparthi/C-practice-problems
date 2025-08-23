//Palindrome number check (palindrome_number.c)
#include<stdio.h>
int main()
{
		int last, n, i, rev, temp;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	temp = n;
	
	if (n<0){
		n = -n;
	}

	while(n>0)
	{
		last = n%10;
		rev = rev*10 + last;
		n = n/10;
	}
	if (temp < 0){
		rev = -rev;
	}

	if(rev==temp)
	{
		printf("Given number is a palindrome");
	}
	else
	{
		printf("Given number isn't a palindrome");
	}
	
	return 0;
}
