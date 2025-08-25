//Print Abundant Numbers in Range (Abundant_Range.c)
#include<stdio.h>
int main()
{
	int i,j ,n1, n2, sum=0;
	
	printf("Enter Range \nFrom : ");
	scanf("%d",&n1);
	printf("\nTo : ");
	scanf("%d", &n2);
	
	for(i=n1; i<=n2; i++)
	{
		for(j=1;j<=i/2;j++)
		{
			if(i%j == 0)
			{
				sum = sum + j;
			}
					
		}
		
		if(sum > i)
		{
			printf("\n%d is a Abundant Number",i);
		}
		sum = 0;
	}
	return 0;
	
}
