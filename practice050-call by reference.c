#include<stdio.h>
#include<stdlib.h>

int square(int *num1,int *num2);

int main(void)
{
	int num=0;
	int square_num = 0;
	printf("Please Enter a number:");
	scanf("%d",&num);
	
	square(&num,&square_num);
	printf("sqare number is %d",square_num);
	return 0;
}

int square(int *num1,int *num2)
{
	*num2=(*num1)*(*num1);
	 return *num2;
}
