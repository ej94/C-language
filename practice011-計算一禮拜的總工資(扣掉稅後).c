#include<stdio.h>

int main ()
{
	double hour=0;
	double tax=0.0;
	double gross_pay=0.0;
	double net_pay=0.0;
	
	printf("Please Enter The Number Of Hours this weeks\n");
	scanf("%lf",&hour);
	
	if(hour <= 40 )
		gross_pay=hour*12.00;
	else
	    gross_pay=(hour-40)*12.00*1.5+40*12.00;
       	
   printf("Gross pay this week = %.2lf\n",gross_pay);
	
	if(gross_pay<= 300)
	    tax=gross_pay*0.15;	
	if (gross_pay>300 && gross_pay < 450)
	    tax=(gross_pay-300)*0.2+300*0.15; 
	if( gross_pay >= 450)
	    tax=300*0.15+150*0.2+(gross_pay-450)*0.25;
	
	printf("Taxes this week = %.2lf\n",tax);
	
	net_pay= gross_pay-tax;
	printf("Net pay this week = %.2lf\n",net_pay);
	
	return 0;
	
}
