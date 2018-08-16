#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int count_number_string(const char array1[]);
void concentrate_string(const char str1[],const char str2[],char result[]);
bool determine_string_equal(const char s1[], const char s2[]);

int main(void)
{
	const char array1[10];
	const char array2[10];
    char s3[100];

	printf("Please Enter characters\n");
	scanf("%s",array1);

	printf("\nPlease Enter characters\n");
	scanf("%s",array2);


    printf("\nThe array1 number of character is %d\n",count_number_string(array1));
    concentrate_string(array1,array2,s3);
    printf("\nthe string is %s\n",s3);
    printf ("\nAre two string equal ? True=1 False=0 ,The answer=%d\n", determine_string_equal (array1, array2));

	return 0;

}

int count_number_string(const char array1[])
{
   int count=0;

   for(count=0;array1[count]!='\0';count++)
   {
   ++count;
   }
   return count ;

}

 void concentrate_string(const char str1[],const char str2[], char result[])
{
	int u=0,l=0;

	for(u=0;str1[u]!='\0';++u)
	{
	result[u]=str1[u];
    }
	for(l=0;str2[l]!='\0';++l)
	{
    result[u+l]=str2[l];
    }
	result[u+l]='\0';
}

bool determine_string_equal (const char s1[], const char s2[])
{
    int j=0 ;
    bool areEqual;
    while ( s1[j] == s2 [j] && s1[j] != '\0' && s2[j] != '\0' )
    {
    ++j;
    }
	if ( s1[j] == '\0' && s2[j] == '\0' )
    areEqual = true;
    else
    areEqual = false;
    return areEqual;
}

