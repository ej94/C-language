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
 getinfo(&person);//�o���ƪ��禡
 makeinfo(&person);//�P�_�r�ꪺ����
 showinfo(&person);//�i�ܦr��
 cleanup(&person);//����r�ꪺ�O����
 return 0;
}


void getinfo(struct namect* pst)
{
	char temp[SLEN];//�гy�@��char array
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
    pst->letters = strlen(pst->fname) +strlen(pst->lname);//�M�w�r��������
 }

 void showinfo (const struct namect * pst)
 {
  printf("%s %s, your name contains %d letters.\n",pst->fname, pst->lname, pst->letters);//�i�ܦ��h�֦r��
 }

 void cleanup(struct namect * pst)
 {
    free(pst->fname);//����O����
    free(pst->lname);
 }

 char * s_gets(char * st, int n)
 {
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);//�Ĥ@�ӰѼƬ��x�s��J��ƪ��}�C�A�ĤG�ӰѼƬ��Ӧ�̦h�X�Ӧr���A�ĤT�ӰѼƬ����V���c FILE �����СC
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
