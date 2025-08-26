//rectangle pattern.c
#include<stdio.h>
int main()
{
	int r,c, i, j ;
	
	printf("enter no. of rows : ");
	scanf("%d", &r);
	
	printf("enter no. of columns : ");
	scanf("%d", &c);
	
	for(i=0; i<c;i++)
	{
		for(j=0; j<r; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
