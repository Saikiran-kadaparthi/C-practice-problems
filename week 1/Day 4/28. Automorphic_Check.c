//Automorphic Number Check (Automorphic_Check.c)
#include<stdio.h>
int main()
{
	int n, square, temp, count=0,last;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	square = n*n;
	temp = n;
	while(temp!=0)
	{
		count++;
		temp = temp/10;
	}
	
	switch (count)
	{
		case 1 :
				last = square %10;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		case 2 :
				last = square %100;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		case 3 :
				last = square %1000;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		case 4 :
				last = square %10000;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		case 5 :
				last = square %100000;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		case 6 :
				last = square %1000000;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		case 7 :
				last = square %10000000;
				if(n == last)
				{
					printf("Given number is a Automorphic");
				}
				else
				{
					printf("Given number is not a Automorphic");
				}
				break;
				return 0;
		
		default : printf("NO idea what to write here!");
					break;
					return 0;


	}
	
	return 0;
	
	
	
}
