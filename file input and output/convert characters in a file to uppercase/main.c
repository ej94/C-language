#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    FILE *fp1,*fp2;
    char str1;

    fp1=fopen("original.txt","r");
    fp2=fopen("temp.txt","r+");

    if(fp1==NULL)
    {
       printf("Error file");
       return(-1);
    }

    if(fp2==NULL)
    {
        printf("Error file");
        return(-1);
    }

    while((str1=fgetc(fp1)) !=EOF)
    {
        if(islower(str1)!=0)
        {
            printf("%c",str1-32);
            fputc(str1-32,fp2);
        }
        else
        {
            printf("%c",str1);
            fputc(str1,fp2);
        }

    }
    fclose(fp1);
    fclose(fp2);
    fp1=NULL;
    fp2=NULL;

    remove("original.txt");
    rename("temp.txt","original.txt");

    return 0;
}
