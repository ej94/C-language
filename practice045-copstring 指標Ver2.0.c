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
	while(*from)//The null character is equal to the value 0,so will jump out then
	{
		*to++=*from++;
	}
	*to='\0';
}
