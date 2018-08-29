#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 50

struct  date
{
	int month;
	int day;
	int year;
};

typedef struct date Date;
  
struct employee
{
	char name[LEN];
	Date  hiredate;
	float salary;
};


int main (void)
{
    struct employee first[LEN] = {
	                              [0]="Jacky",{8,23,2018},22000.25,
	                              [1]="Jason",{3,21,2018},18000.66,
								  [2]="Gina",{9,17,2018},38000.2
								 };
	
	printf("employee's name:%s\nemployee's hirdate=%d,%d,%d\nemployee's salary=%.2f\n",
	        first[1].name,first[1].hiredate.month,first[1].hiredate.day,first[1].hiredate.year,first[1].salary);
	
	printf("\nEnter the employee's name: ");
	scanf("%s",&first[3].name);
	
	printf("Hiredate's month:");
	scanf("%d",&first[3].hiredate.month);
	
	printf("Hiredate's day:");
	scanf("%d",&first[3].hiredate.day);
	
	printf("Hiredate's year:");
	scanf("%d",&first[3].hiredate.year);
	
	printf("salary:");
	scanf("%f",&first[3].salary);
	
	printf("\nemployee's name:%s\nemployee's hirdate=%d,%d,%d\nemployee's salary=%.2f",
	        first[3].name,first[3].hiredate.month,first[3].hiredate.day,first[3].hiredate.year,first[3].salary);
	
	        
    return 0;
}
