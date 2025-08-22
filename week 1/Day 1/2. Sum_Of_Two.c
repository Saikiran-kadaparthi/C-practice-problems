//Take two numbers as input and print their sum.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Give First Number : ");
    scanf("%d", &num1);
    printf("Give Second Number : ");
    scanf("%d", &num2);
    int sum;
    sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);

}
