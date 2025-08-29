//Second_Largest_In_Array
#include<stdio.h>
int main(){
	int first, second, i, arr[10];
	
	printf("Enter 10 array elements : ");
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	first = arr[0];
	second = arr[1];
	
	for(i=0; i<10; i++)
	{
		if(arr[i]> first )
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && first != arr[i])
		{
			second = arr[i];
		}
	}
	
	printf("%d is the second largest number!", second);
	
	return 0;
}
