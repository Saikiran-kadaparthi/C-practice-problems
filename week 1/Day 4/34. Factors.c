//Factors of a Number (Factors.c)
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n/2;i++)
	{
		if(n%i == 0 )
		{
			printf("\n %d", i);
		}
	}
	printf("\n%d",n);
	return 0;
}
