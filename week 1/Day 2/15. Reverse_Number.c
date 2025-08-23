//Reverse a number (reverse_number.c)
#include<stdio.h>
int main()
{
	int last, n, i, rev;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if (n<0){
		n = -n;
		
		while(n>0)
		{
			last = n%10;
			rev = rev*10 + last;
			n = n/10;
		}
		
		rev = -rev;
	}
	else{
	while(n>0)
	{
		last = n%10;
		rev = rev*10 + last;
		n = n/10;
	}
	}
	printf("%d", rev);
	
	return 0;
}
