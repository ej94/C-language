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
	
	//用token 儲存null地址裡面的字句 	
	while( token = strtok(NULL,s))
	{
		printf("%s\n",token);
		
	
	}
	
	return 0;
}
