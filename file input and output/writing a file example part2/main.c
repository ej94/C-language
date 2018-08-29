#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp=fopen("file.txt","w+");

    fputs("This is c programming\n",fp);
    fputs("This is a system programming language",fp);

    fclose(fp);
    return (0);
}
