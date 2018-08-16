#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=20;
	int *vptr=NULL;
	
	vptr=&a;
	
	printf("The number address is %p\n",&a);
	printf("the pointer address is %p\n",&vptr);
	printf("the pointer value = %p\n",vptr);
	printf("pointer point to = %d\n",*vptr);
	
	return 0;
}
