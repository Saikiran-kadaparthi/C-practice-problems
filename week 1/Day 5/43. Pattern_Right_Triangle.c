//Right Triangle (Pattern_Right_Triangle.c)
#include<stdio.h>
int main()
{
	int i,j,c;
	
	printf("Enter number of columns : ");
	scanf("%d",&c);
	
	for(i=1; i<=c; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
