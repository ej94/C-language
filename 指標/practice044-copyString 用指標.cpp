#include<string.h>
#include<stdio.h>

void copyString(char *to,char *from);

int main(void)
{
	char string[]={"I am Jacky"};
	char copystring[50];
	
	copyString(copystring,string);
	printf("%s\n",copystring);
	return 0;
}

void copyString(char *to,char *from)
{
	for(;*from!='\0';++from,++to)
	{
		*to=*from;
	}
	*to='\0';
}
