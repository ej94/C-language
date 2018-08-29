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
  //用while 可以讀整篇 但用if只能讀一行
  {
    //writing content to stdout
    printf("%s",str);
  }

  fclose(fp);
  fp=NULL;

  return(0);

  }
  //end main
