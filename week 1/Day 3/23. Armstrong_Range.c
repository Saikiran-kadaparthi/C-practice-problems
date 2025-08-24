//Armstrong Numbers in Range (Armstrong_Range.c)
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,temp=0,count=0,result=0,digit=0;
	printf("Enter range : ");
	scanf("%d", &n);
	
	
	
	for(i=0;i<=n;i++)
	{
		temp = i;
		while(temp != 0)
		{
			count++;
			temp = temp/10;
		}	
		
		temp = i;
		
		while(temp != 0)
		{
			digit = temp % 10;
			result += pow(digit, count);
			temp /= 10;
		}
		
		if(result == i )
		{
			printf("\n%d is Armstrong number!", i);
		}
		
		count = 0, result = 0;
				
	}

	return 0;
}
