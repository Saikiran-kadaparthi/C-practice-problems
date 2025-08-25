//Strong Numbers in Range (Strong_Range.c)
#include<stdio.h>
int main()
{
	int i,j,temp,n,num,sumoffact=1,digit, total=0;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
	temp=j;
	
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
	
	if(j==total)
	{
		printf("\n%d",j);
	}
	total = 0;
}

	return 0;
}
