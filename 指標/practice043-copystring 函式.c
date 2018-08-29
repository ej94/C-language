#include<string.h>
#include<stdio.h>

void copyString(char to[],char from[]);

int main(void)
{
  char string[]={"I am Jason"};
  char copystring[50];
  
  copyString(copystring,string);
  printf("%s\n",copystring);

  return 0;	
}

void copyString(char to[],char from[])
{
	int i;
	
	for(i=0;from[i]!='\0';++i)
	{
		to[i]=from[i];
	}
	to[i]='\0';
}
