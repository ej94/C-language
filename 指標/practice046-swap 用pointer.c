#include<stdio.h>
#include<string.h>

#include<stdio.h>

void swap(int *x,int *y);

int main(void)
{
	int x=100;
	int y=200;
	
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	
	swap(&x,&y);
	printf("After swap\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	
	return 0;
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	return; 
}
