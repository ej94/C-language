#include<stdio.h>
#include<stdlib.h>

int calculatethestring(const char* ptr1);

int main(void)
{
	char array1[]={"I am Jacky"};
	 
	
	printf("The length of th string = %d",calculatethestring(array1));
	
	return 0;
}

int calculatethestring(const char* ptr1)
{
	 const char *ptr2 = ptr1;
    
	while(*ptr2)
	{
		++ptr2;
	}
	return ptr2-ptr1;
}
