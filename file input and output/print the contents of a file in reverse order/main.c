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
    //�����O�}�l��m
    len=ftell(fp);
    //�i�H���D�h�֦r�`

    while(i<len)
    {
        i++;
        //�]��len
        fseek(fp,-i,SEEK_END);
        //�}�l��m=�q�̧��ݶ}�l(-i)
        str=fgetc(fp);
        printf("%c",str);
    }

    fclose(fp);
    fp=NULL;
    return 0;
}
