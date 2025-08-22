//Find the largest of 3 numbers (largest_of_three.c)
#include<stdio.h>
int main(){
	int n1,n2,n3;
	
	//First number input.
	printf("Give First Number : ");
	scanf("%d",&n1);
	
	//Second number input.
	printf("Give Second Number : ");
	scanf("%d",&n2);
	
	//Third number input.
	printf("Give Third number : ");
	scanf("%d",&n3);
	
	//Greatest number Logic.
	if(n1>n2 && n1>n3)
	{
		printf("Greatest number : %d", n1);
	}
	else if (n2>n3 && n2>n1)
	{
		printf("Grestest number : %d", n2);
	}
	else
	{
		printf("Greatest number : %d", n3);
	}
	
	return 0;
	
}
