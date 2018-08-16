#include<stdio.h>

int main()
{
	int i = 1, j = 1,total=0;
	
	for(i=1;i<=9;i++)
    	{
	    for(j=1;j<=9;j++)
	    {
	    total=i*j;
	    printf("%d x %d = %2d\t",i,j,total);
		}
        printf("\n");
        printf("\n");
		}
  	    
	
	return 0;
}
