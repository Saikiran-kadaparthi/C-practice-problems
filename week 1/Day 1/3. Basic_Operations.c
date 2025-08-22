//Take two numbers and print basic operations like difference, product, quotient (basic_operations.c)
#include<stdio.h>
int main(){
	int num1, num2;
	printf("Give first number : ");
	scanf("%d", &num1);
	printf("\nGive second number : ");
	scanf("%d", &num2);
	
	printf("\n Sum of %d and %d = %d",num1, num2, num1+num2);
	printf("\n Difference between %d and %d = %d",num1, num2, num1-num2);
	printf("\n Product of %d and %d = %d",num1, num2, num1*num2);
	printf("\n Division/Quotient of %d and %d = %d",num1, num2, num1/num2);
	printf("\n Module/Reminder of %d and %d = %d",num1, num2, num1%num2);
	
	return 0;
}
