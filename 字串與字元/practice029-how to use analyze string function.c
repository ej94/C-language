#include<stdio.h>
#include<string.h>

int main(void)
{
	char buff[100]; //input buffer
	int nLetters=0,nDigits=0,nPunct=0;
	//Number of letters ,digits,punctuation characters
	
	printf("Enter an interesting string of less than %d characters:\n",100);
	scanf("%s",buff);
	//read a string into buffer
	
	int i=0;
	while(buff[i])
	{
		if(isalpha(buff[i]))
		 ++nLetters;
		 
		else if(isdigit(buff[i]))
		 ++nDigits;
		
		else if(ispunct(buff[i]))
         ++nPunct;
         ++i;
	}
	printf("\nYour string contained %d letters, %d digits and %d punctuation characters \n",nLetters,nDigits,nPunct);

}
