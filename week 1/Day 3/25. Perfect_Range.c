//Perfect Numbers in Range (Perfect_Range.c)
#include<stdio.h>
int main()
{
	int i,j, n, result=0;
	
	printf("Enter a Range : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<= i/2;j++)
		{
			if(i%j == 0)
			{
				result = result + j;
			}
		}
		if(result == i)
		{
			printf("\n%d is a perfect number",i);
		}

		result = 0;
	
	}
	
	return 0;
}
