#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char array1[50],array2[50];
	int i=0,j=0,k=0;
	
	printf("Please Enter some character to reverse : ");
	scanf("%s",array1);
	
	k=strlen(array1);
    for(i=(k-1),j=0;i>=0;i--,j++)
	{
		array2[j]=array1[i];		
    }
	array2[j]='\0';
	
	printf("The reverse string is:%s\n",array2);
	return 0;
}

