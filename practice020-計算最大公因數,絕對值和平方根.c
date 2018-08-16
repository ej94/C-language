#include<stdio.h>
#include <math.h>

int gcd(int a,int b);//function prototype
float absolutevalue( float c);
float sqrtf( float d);

int main(void)
{
	int x=0,y=0;
	float z=0;
	
	//calculate gcd function
	printf("Enter Two Non-negative Number\n");
	scanf("%d\n%d",&x,&y);
	printf("gcd(%d,%d) = %d\n",x,y,gcd(x,y));
	
	//calculate absolute value of number
	printf("\nEnter One Number\n");
	scanf("%f",&z);
	printf("Absolute value of %.1f = %.1f\n",z,absolutevalue(z));
	
	//calculate the sqare root of number
	printf("\nThe sqare root of %.1f = %.3f\n",z,sqrtf(z));
	
	return 0;
}

//function definition
int gcd(int a,int b)
{
	while(b>0)
	{
		int r=(a%b);
		a=b;
		b=r;
	}
	return a;
}


float absolutevalue( float c)
{
	if(c<0)
	{
		return c*(-1);
	}
	else
	{ 
	   	return c;
	}
}

float sqrtf( float d)
{
	if(d<0)
	{
		return -1;
	}
	return sqrt(d);
}
    
