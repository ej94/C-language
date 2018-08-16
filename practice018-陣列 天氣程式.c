#include<stdio.h>

int main(void)
{
  float array[5][12]=
  {
             {3.2,4.2,5.5,3.6,2.7,2.7,1.7,2.8,2.9,3.7,3.3,3.8},
             {1.2,1.3,1.5,1.6,1.7,4.1,4.3,4.2,4.3,4.4,3.9,3.2},
             {2.1,2.5,2.9,3.0,2.1,1.2,1.3,1.4,1.5,1.6,3.1,5.2},
             {5.1,5.4,5.3,5.5,3.2,3.2,3.1,3.2,3.4,2.3,2.2,2.1},
             {2.3,2.5,1.2,1.4,1.3,1.2,1.1,1.4,1.5,1.6,1.7,1.2},
            };
  float i=0,g=0;
  int l=0,m=0;
  // for each month,array[l][m]


    printf("year\trainfall (inches)\n");
    for(l=0,g=0;l<=4;++l)
    {
	   for(m=0,i=0;m<=11;++m)
	{
        i+=array[l][m];

    }
	printf("%2d\t%2.1f\n",2010+l,i) ; 
	//雙重迴圈先處理第一年每一月的數字 
	g+=i;
	//年的總和 
    }
    printf("\nThe yearly average = %.2f inches\n\n",g/5);

    printf("Monthly Average:\n\n");
    printf("  Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    for(m=0;m<=11;++m)
	{
        for(l=0,i=0;l<=4;++l)
    {
        i+=array[l][m];

    }
    //雙重迴圈先處理第一月的每一年數字 
    printf("%5.1f",i/5);
    //處理完後每個i在除以5，因為i是第一個月的五次總和，求平均就是要除以5 
	}
	printf("\n");
    return 0;
}






