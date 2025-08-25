//Prime Numbers in Range (Prime_Range.c)
#include<stdio.h>
int main()
{
	int n1, n2, i, j, temp=0;
	
	printf("Enter Range \n From :  ");
	scanf("%d",&n1);
	printf("\n To : ");
	scanf("%d",&n2);
	
	for(i=n1; i<=n2; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				temp = 1;
				break;
			}
		}
		
		if(!temp)
		{
			printf("\n%d",i);
		}
		
		temp = 0;
		
	}
	
	return 0;

}
