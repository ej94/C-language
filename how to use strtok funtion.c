#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[80]="Hello how are you-my name is-jason";
	const char s[2]="-"; 
	char*token;
	
	//get the first token
	token = strtok(str,s);
	printf("%s\n",token);
	
	//��token �x�snull�a�}�̭����r�y 	
	while( token = strtok(NULL,s))
	{
		printf("%s\n",token);
		
	
	}
	
	return 0;
}
