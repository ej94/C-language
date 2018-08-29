#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int composite[50]={0};
    int i=0,p=0,j=2;
    bool isPrime;

    composite[0]=2;//秨﹍皚絪腹琌i计琌p 
    composite[1]=3;

    for(p=5;p<=100;p=p+2)//―5计ㄤい临Τ357计 
    {
         isPrime = true;//﹚竡 bool isPrime 琌true,碞琌1 

         for(i=1;composite[i]*composite[i]<=p && isPrime;++i)
		 //蛤腹nずゲΤ借计i眖1秨﹍絚絪腹ぃ絚柑计安砞┮Τ计常琌1 
         
		 {
             if(p%composite[i]==0)
			 //讽借计埃皚ず计单0false =0 
             isPrime = false;
         }
         if (isPrime == true)
		    //痙┮Τtrue计 
         {
             composite[j]=p;
			 //ノ穝絪腹皚ㄓ借计 
             ++j;
			 //既竟计j璶獽纗 
         }
    }

    for (i=1;i<j;++i)//パ璶5┮i璶眖2秨﹍ 


            printf("%i ",composite[i]);
            printf("\n");

    return 0;
    }

