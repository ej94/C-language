#include<stdio.h>

int main(void)
{
	long num1= 0L;
	long num2= 0L;
	long*pnum=NULL;
	
	pnum=&num1;
	//���Ы��Vnum1 
	*pnum=2L;
	//�N���Ы��V���ƭȧאּ2L,num1=2L
	++num2;
	//num2�ۤv�[1,num2=1L
	num2+=*pnum;
	//num2+���Ы��V���ƭ�=1+2=3,num2=3L
	
	pnum=&num2;
	//�A�N���Ы��Vnum2�A���num1�Apnum=3 
	++*pnum;
	//���Ы��V���ƭ�(num2)�ۤv�[1=3+1=4,num2=4,pnum=4 
	
    printf("num1=%ld,num2=%ld,*pnum=%ld,*pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);
	
	return 0;
}
