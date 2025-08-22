//Check if a year is leap year (leap_year_finder.c).
#include<stdio.h>
int main()
{
	int Year;
	
	printf("Enter a year : ");
	scanf("%d", &Year);
	
	if (Year % 400 == 0)
	{
		printf("%d is a Leap Year", Year);
	}
	else if (Year % 100 == 0)
	{
		printf("%d is Not a Leap Year", Year);
	}
	else if (Year % 4 == 0)
	{
		printf("%d is a Leap Year", Year);
	}
	else
	{
	printf("%d is Not a Leap Year", Year);
	}

	return 0;

}
