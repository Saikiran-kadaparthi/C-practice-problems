//Sum of First N Even Numbers (Sum_Of_Evens.c)
#include<stdio.h>
int main()
{
	int i, sum=0, n;
	
	printf("Give Number N : ");
	scanf("%d",&n);
	
	for(i=0; i<=n; i+=2)
	{
		sum = sum +i;
	}
	printf("sum of Evens from 1 to %d is %d", n , sum);
	return 0;
}

