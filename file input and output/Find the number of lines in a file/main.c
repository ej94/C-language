#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  FILE *fp;
  char str[60];
  int counter=0;

  fp=fopen("test.txt","r");

  if(fp==NULL)
  {
    perror("Error in opening file");
    return -1;
    //read a single char
  }
  while(fgets(str, sizeof(str), fp)!=NULL)
  //��while �i�HŪ��g ����if�u��Ū�@��
  //�t�@�ؼg�k�O�A�]�@���ܼ�c,while(c=fgetc(fp)!=EOF)
  //�����if(c=="\n")
  //�O���printf���ɭ�,�n++counter
  {
    counter++;
  }
  printf("Total lines of the file :%d",counter);

  fclose(fp);
  fp=NULL;

  return(0);

  }
  //end main
