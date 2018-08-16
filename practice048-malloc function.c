#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *str;
	
	str=(char *)malloc(15);
	strcpy(str,"jason");
	printf("String = %s,Address = %u\n",str,str);
	
	str = (char*)realloc(str,25);
	strcat(str,"com");
	printf("String = %s,Address = %u\n",str,str);
	
	free(str);
	
	return 0;
}
