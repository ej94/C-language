#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char text[100];//input buffer for string to be searched
	char substring[40];//input buffer for string sought
	int i=0;
	
	printf("Enter the string to be searched (less than %d charactes):\n",100);
	scanf("%s",text);
	
	printf("\nEnter the string sought(less than %d character):\n",40);
	scanf("%s",substring);
	
	printf("\nFirst string entered:\n%s\n",text);
	printf("Second string entered:\n%s\n",substring);
	
	//convert both string to uppercase
	for(i=0;(text[i]=(char)toupper(text[i]))!='\0';++i);
	{
	for(i=0;(substring[i]=(char)toupper(substring[i]))!='\0';++i)
	{
	printf("\nThe second string %s found in the first\n",((strstr(text,substring)== NULL)?"WAS NOT":"WAS"));  
    }
    }  
    
    return 0;
    
}
