#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp=fopen("file.txt","w+");

    if(fp!=NULL)
    {
      fprintf(fp,"%s %s %s %s %d","Hello","my","number","is",132);
    }
    fclose(fp);
    return (0);
}
