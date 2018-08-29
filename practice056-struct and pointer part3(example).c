#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SLEN 81

struct namect{
	char *fname;
	char *lname;
	int letters;
};

 void getinfo(struct namect *);// allocates memory
 void makeinfo(struct namect *);
 void showinfo(const struct namect *);
 void cleanup(struct namect *); // free memory when done
 char * s_gets(char * st, int n);

 int main(void)
 {
 struct namect person;
 getinfo(&person);//得到資料的函式
 makeinfo(&person);//判斷字串的長度
 showinfo(&person);//展示字串
 cleanup(&person);//釋放字串的記憶體
 return 0;
}


void getinfo(struct namect* pst)
{
	char temp[SLEN];//創造一個char array
	printf("Please enter yor first name.\n");
	s_gets(temp,SLEN);

	//allocate memory to hold name
	pst->fname=(char*)malloc(strlen(temp)+1);

	//copy name to allocated memory
	strcpy(pst->fname,temp);
	printf("Please enter yor last name.\n");
	s_gets(temp,SLEN);
	pst->lname=(char*)malloc(strlen(temp)+1);
	strcpy(pst->lname,temp);
}

void makeinfo (struct namect * pst)
 {
    pst->letters = strlen(pst->fname) +strlen(pst->lname);//決定字元的長度
 }

 void showinfo (const struct namect * pst)
 {
  printf("%s %s, your name contains %d letters.\n",pst->fname, pst->lname, pst->letters);//展示有多少字元
 }

 void cleanup(struct namect * pst)
 {
    free(pst->fname);//釋放記憶體
    free(pst->lname);
 }

 char * s_gets(char * st, int n)
 {
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);//第一個參數為儲存輸入資料的陣列，第二個參數為該行最多幾個字元，第三個參數為指向結構 FILE 的指標。
 if (ret_val)
 {
    find = strchr(st, '\n'); // look for newline
    if (find) // if the address is not NULL,
    {
    *find = '\0'; // place a null character there
    }
    else{
    while (getchar() != '\n')
    continue; // dispose of rest of line
    }
 }
  return ret_val;
 }
