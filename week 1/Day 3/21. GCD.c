//GCD of Two Numbers (GCD.c)
#include<stdio.h>
int main(){
	int i, n1, n2, max, temp=0;
	
	printf("Please Enter first number : ");
	scanf("%d",&n1);
	
	printf("Please Enter second number : ");
	scanf("%d",&n2);
	
	max = (n1 < n2) ? n1 : n2; 

	
	for(i=1;i<=max;i++)
	{
		if(n1%i==0 && n2%i == 0)
		{
			temp=i;
		}
	}
	printf("%d", temp);
	return 0;

}

