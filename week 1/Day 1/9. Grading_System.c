//Grade system – take marks and print A/B/C/F (grading_system.c).
#include<stdio.h>
int main()
{
	int marks;
	
	invalid : {
	printf("Enter Your Marks : ");
	scanf("%d",&marks);
	
	if(marks > 100 || marks < 0)
	{
		printf("Invalid marks");
		printf("\n");
		goto invalid;
	}
	
	else if (marks < 35)
	{
		printf("Grade : F");
	}
	else if (marks >= 35 && marks <= 50)
	{
		printf("Grade : D");
	}
	else if (marks >= 51 && marks <= 70)
	{
		printf("Grade : C");
	}
	else if (marks >= 71 && marks <= 85)
	{
		printf("Grade : B");
	}
	else
	{
		printf("Grade : A");
	}
	
	return 0;
  }
}
