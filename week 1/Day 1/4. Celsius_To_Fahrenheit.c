//Convert Celsius to Fahrenheit (celsius_to_fahrenheit.c)
#include<stdio.h>
int main()
{
	float Celsius;
	printf("Give Celsuis to convert it into Fahrenheit : ");
	scanf("%f",&Celsius);
	
	float Fahrenheit = (Celsius* 9/5) + 32;
	printf("%.2f Celsuis in Fahrenheit = %.2f", Celsius, Fahrenheit);
	return 0; 
}
