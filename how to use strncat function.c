#include<stdio.h>
#include<string.h>

int main(void)
{
	char src[50],dest[50];
	
	strcpy(src,"This is source");
	strcpy(dest,"This is destination");
	
	strncat(dest,src,15);
	
	printf("Final destination string:\n|%s|",dest);
	return 0;
}

