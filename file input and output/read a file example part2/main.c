#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  FILE *fp;
  char str[60];

  fp=fopen("myfile.txt","r");

  if(fp==NULL)
  {
    perror("Error in opening file");
    return -1;
    //read a single char
  }
  if(fgets(str,60,fp)!= NULL)
  //��while �i�HŪ��g ����if�u��Ū�@��
  {
    //writing content to stdout
    printf("%s",str);
  }

  fclose(fp);
  fp=NULL;

  return(0);

  }
  //end main
