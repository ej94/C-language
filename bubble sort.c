#include<stdio.h>
#include<string.h>


int main(void)
{
	char array1[10][30];
	int i,j,k,e;
	
	printf("Input number of string:");
	scanf("%d",&e);
	printf("input string:");
	scanf("%d",&k);
	
	for(i=0;i<k;i++)
	{
    scanf("%s",array1[i]);
    }
	
	for(j=0;j<k;j++)
	{
        for(i=0;i<k-1;i++)
        {
	        if(strcmp(array1[i],array1[i+1])>0)
	        {
	         char array2[30];
		     strcpy(array2,array1[i]);
	         strcpy(array1[i],array1[i+1]);
	         strcpy(array1[i+1],array2);
	        } 
		}
	}
	
    printf("The string is\n");
	for(i=0;i<k;i++)
	{
		printf("%s\n",array1[i]);
    }
	
	return 0;
}
