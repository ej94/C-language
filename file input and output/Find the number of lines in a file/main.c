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
  //用while 可以讀整篇 但用if只能讀一行
  //另一種寫法是再設一個變數c,while(c=fgetc(fp)!=EOF)
  //之後用if(c=="\n")
  //記住用printf的時候,要++counter
  {
    counter++;
  }
  printf("Total lines of the file :%d",counter);

  fclose(fp);
  fp=NULL;

  return(0);

  }
  //end main
