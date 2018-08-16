#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void)
{
	char *vptr=NULL;
	int i=0,j=0;
	
	printf("Please enter number for texting number:");
	scanf("%d",&i);
	
	if(i==0)
	{
		printf("Invalid input\n");
        exit(EXIT_FAILURE);
	}
	vptr=(char *)malloc(i*sizeof(char));
	
	
	if (vptr != NULL)
	{
	printf("Insert the string: ");
    scanf("%s", vptr);
    }
    
    j=strlen(vptr);
    if(j>i)
    {
    	printf("you allocate %d bytes for string,it is out of %d bytes\n", j,i);
    	exit(EXIT_FAILURE);
	}
	
    printf("String: %s\n", vptr);
    free(vptr);
    
    vptr=NULL;
    return 0;

}
