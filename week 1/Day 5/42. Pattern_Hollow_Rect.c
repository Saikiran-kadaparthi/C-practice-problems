//Hollow Rectangle (Pattern_Hollow_Rect.c)
#include<stdio.h>
int main()
{
	int i,j, r,c;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	
	printf("Enter number of columns : ");
	scanf("%d",&c);
	
	for(i=1; i<=c; i++)
	{
		for(j=1; j<=r; j++)
		{
			if(i==1 || i==c || j==1 || j==r)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
