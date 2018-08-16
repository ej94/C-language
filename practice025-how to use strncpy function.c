#include<stdio.h>
#include<string.h>

int main (void)
{
	char mystring[]= "My name is jason\0";
	char temp1[17];
	char temp2[16];
	char temp3[16];
	char temp4[20];
	
	strncpy(temp1, mystring,sizeof(temp1)-1);
	strncpy(temp2, mystring,sizeof(temp2));
	strncpy(temp3, mystring,sizeof(temp3)-1);
	strncpy(temp4, mystring,sizeof(temp4)-1);
	
	printf("The string is %s\n",temp1);
	printf("sizeof(temp1) = %d bytes\n",sizeof(temp1)-1);
	
	printf("\nThe string is %s\n",temp2);
	printf("sizeof(temp2) = %d bytes\n",sizeof(temp2));
	
	printf("\nThe string is %s\n",temp3);
	printf("sizeof(temp3) = %d bytes\n",sizeof(temp3)-1);
	
	printf("\nThe string is %s\n",temp4);
	printf("sizeof(temp4) = %d bytes\n",sizeof(temp4)-1);
	
	//sizeof(temp) gives You the size of the whole char array uncluding the '\0' , 
	//so you have to -1 inorder to avoid replacing the null character
	
	return 0;
}
