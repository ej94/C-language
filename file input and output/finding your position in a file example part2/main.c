#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fpos_t position;

    fp=fopen("file.txt","w+");
    fgetpos(fp,&position);
    //找到文件的記憶體位址
    fputs("Hello,World!",fp);

    return 0;
}
