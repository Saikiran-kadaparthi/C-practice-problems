//Harshad Numbers in range (Harshad_In_Range.c)
#include<stdio.h>
int main()
{
	int range, n, temp, digit, sum = 0,;

	printf("Enter a Range : ");
	scanf("%d",&range);
	
	
	for(n=1;n<=range;n++)
	{
		temp = n;
	
		while(temp > 0)
		{
			digit = temp %10;
			sum += digit;
			temp /= 10;
		}
	
		if(n%sum == 0)
		{
			printf("\n%d number is a Harshad Number!", n);
		}
		
		sum = 0;
	}
	
	return 0;
}

