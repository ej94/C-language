#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE*fp=NULL;
    char str;
    int len,i=0;

    fp=fopen("temp.txt","r+");

    if(fp==NULL)
    {
        printf("Error file");
        return(-1);
    }
    fseek(fp,0,SEEK_END);
    //中間是開始位置
    len=ftell(fp);
    //可以知道多少字節

    while(i<len)
    {
        i++;
        //跑到len
        fseek(fp,-i,SEEK_END);
        //開始位置=從最尾端開始(-i)
        str=fgetc(fp);
        printf("%c",str);
    }

    fclose(fp);
    fp=NULL;
    return 0;
}
