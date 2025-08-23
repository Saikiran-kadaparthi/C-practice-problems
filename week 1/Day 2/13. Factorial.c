//Find factorial of a number (factorial.c)
#include<stdio.h>
int main(){
	int i, n, temp=1;
	
	printf("Enter a number to Find factorial : ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Invalid. Input number greater than -1 : ");
	}
	else{
		
		for(i=n;i>=1;i--)
		{
			temp = temp * i;
		}
	}
		
	printf("Factorial of %d = %d",n,temp);
	
	return 0;
}
