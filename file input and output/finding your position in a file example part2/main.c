#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fpos_t position;

    fp=fopen("file.txt","w+");
    fgetpos(fp,&position);
    //����󪺰O�����}
    fputs("Hello,World!",fp);

    return 0;
}
