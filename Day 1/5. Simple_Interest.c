//Calculate simple interest (P, R, T) (simple_interest.c).
#include<stdio.h>
int main(){
	float P, T, R, SI;
	
	//principle amount input.
	printf("Give the Principal Amount : ");
	scanf("%f",&P);
	
	//Time in year input.
	printf("Give the Time (in years) : ");
	scanf("%f",&T);
	
	//Rate of interest Input.
	printf("Give the Rate of Interest : ");
	scanf("%f", &R);
	
	SI = (P*T*R) / 100;
	
	printf("\nYour simple Interest will be : %.2f", SI);
	return 0;
	
	
}
