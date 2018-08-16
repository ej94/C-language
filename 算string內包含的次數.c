#include<stdio.h>

int main(void)
{
	char str1[] = "To be or not to be";
	char str2[] = ",That is the question";
	unsigned int count=0;//儲存string的長度 
	
    while( str1[count] != '\0')
    {
    	++count;
    }
	printf("The length of the string \"%s\"is %d characters. \n",str1,count);
	
	count=0;
	
	while( str2[count] != '\0')
    {
    	++count;	
	}
	printf("The length of the string \"%s\"is %d characters. \n",str2,count);
    	
	
	return 0;
	
}
