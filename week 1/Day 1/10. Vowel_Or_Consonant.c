//Check if a character is vowel or consonant (vowel_or_consonant.c).
#include<stdio.h>
int main()
{
	char C;
	
	printf("Give a Character : ");
	scanf("%c", &C);
	
	if(C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' 
		|| C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
	{
		printf("Given Character is a Vowel!");
	}
	else if( C >= 'a' && C <= 'z' || C >= 'A' && C <= 'Z')
	{
		printf("Given Character is a Consonant!");
	}
	else
	{
		printf("Not a Character.");
	}
	return 0;
}
