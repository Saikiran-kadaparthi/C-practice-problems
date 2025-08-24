//LCM of Two Numbers (LCM.c)
#include<stdio.h>
int main()
{
	int i, n1, n2, temp=1;
	
	printf("Please Enter first number : ");
	scanf("%d",&n1);
	
	printf("Please Enter second number : ");
	scanf("%d",&n2);
		
	temp = (n1 > n2) ? n1 : n2; 
	
	while(1)
	{
		if(temp%n1==0 && temp%n2==0){
			printf("LCM of %d and %d is %d",n1, n2, temp);
			return 0;
		}
		temp++;
	}	
	
	return 0;
}
