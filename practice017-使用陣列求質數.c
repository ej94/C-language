#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int composite[50]={0};
    int i=0,p=0,j=2;
    bool isPrime;

    composite[0]=2;//�@�}�l�}�C���s���Oi�A�Ʀr�Op 
    composite[1]=3;

    for(p=5;p<=100;p=p+2)//���D�X5�H�W���_�ơA�䤤�٦�3�B5�B7������ 
    {
         isPrime = true;//�w�q bool�� isPrime �Otrue,�]�N�O1 

         for(i=1;composite[i]*composite[i]<=p && isPrime;++i)
		 //�b�@�Ӹ�n�������@�ӽ�ơAi�q1�}�l����]�b��c�l���s�����N��c�l�̭����Ʀr�A�����]�Ҧ��Ʀr���O1 
         
		 {
             if(p%composite[i]==0)
			 //���ư��H�}�C�����Ʀr����0���ɭԡAfalse =0 
             isPrime = false;
         }
         if (isPrime == true)
		    //�d�U�Ҧ�true���Ʀr 
         {
             composite[j]=p;
			 //�έ��s�s�����}�C�Ӧs��� 
             ++j;
			 //�Ȧs�����Ʀrj�n�@���[�A�H�K�x�s 
         }
    }

    for (i=1;i<j;++i)//�ѩ�n�L�X5�A�ҥHi�n�q2�}�l 


            printf("%i ",composite[i]);
            printf("\n");

    return 0;
    }

