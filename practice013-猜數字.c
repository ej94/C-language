#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{	

	int randomnumber ,inputnumber = 0, time=5;
	time_t t;

    srand((unsigned) time&t);
	randomnumber = rand() %21;
	
	printf("This is a guessing game\n");
	printf("I have chosen number between 0 and 20 which you must guess\n");
    
	for(time=5;time>=1;--time)
	{ 
	main: 
	printf("\nYou have %d tries left\n",time);
    printf("Enter a guess\n");
	scanf("%d",&inputnumber);
	
	if(inputnumber>=0 && inputnumber <=20)
	{
	
	     if(randomnumber>inputnumber)
    	{
		 printf("Sorry,%d is wrong.My number is higher than that\n",inputnumber);
        }
        else if(randomnumber< inputnumber)
	    {
	     printf("Sorry,%d is wrong.My number is less than that\n",inputnumber);
        }
        else if(randomnumber==inputnumber)
        {
	    printf("Congratulations. You guessed it\n");
	    break;
        }
    }  
	else
	   {
	   printf("You should enter the number between 0 to 20\n");
	   goto main; 
	   }   
    
	if(time==1)
	    {
	     printf("\nYou Lose. The number is %d\n",randomnumber);	
        }
    }
	return 0;  
}
