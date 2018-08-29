#include<stdio.h>

int main(void)
{
	long num1= 0L;
	long num2= 0L;
	long*pnum=NULL;
	
	pnum=&num1;
	//指標指向num1 
	*pnum=2L;
	//將指標指向的數值改為2L,num1=2L
	++num2;
	//num2自己加1,num2=1L
	num2+=*pnum;
	//num2+指標指向的數值=1+2=3,num2=3L
	
	pnum=&num2;
	//再將指標指向num2，放棄num1，pnum=3 
	++*pnum;
	//指標指向的數值(num2)自己加1=3+1=4,num2=4,pnum=4 
	
    printf("num1=%ld,num2=%ld,*pnum=%ld,*pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);
	
	return 0;
}
