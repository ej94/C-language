#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 30

struct item
{
  char *itemname;
  int quantity;
  float price;
  float amount;
  //amount=price+quantity
};

void Getinfo(struct item * ptr);
void Printinfo(struct item *ptr);
void Freeinfo(struct item *ptr);
char * s_gets(char * st, int n);

int main(void)
{
   struct item item1;
   Getinfo(&item1);
   Printinfo(&item1);
   Freeinfo(&item1);

   return 0;
}

void Getinfo(struct item * ptr)
{
    char array[LEN];
    printf("Please Enter the item's name:");
    s_gets(array,LEN);

    ptr->itemname=(char*)malloc(strlen(array)+1);
    strcpy(ptr->itemname,array);

    printf("Please enter the item's price:");
    scanf("%f",&ptr->price);

    printf("Please enter the item's quantity:");
    scanf("%d",&ptr->quantity);

    ptr->amount=ptr->price*ptr->quantity;

}

void Printinfo(struct item *ptr)
{
    printf("\nitem's name : %sitem's price : %.2f\nitem's quantity:%d\nitem's amount:%.2f",
           ptr->itemname,ptr->price,ptr->quantity,ptr->amount);

}

void Freeinfo(struct item *ptr)
{
    free(ptr->itemname);
}

 char * s_gets(char * st, int n)
 {
    char * ret_val;
    char * end;
    ret_val = fgets(st, n, stdin);//第一個參數為儲存輸入資料的陣列，第二個參數為該行最多幾個字元，第三個參數為指向結構 FILE 的指標。
 if (ret_val)
 {
    end = strchr(st, '\n'); // look for newline
    if (end!=NULL) // if the address is not NULL,
    {
    end = '\0'; // place a null character there
    }
    else{
    while (getchar() != '\n')
    continue; // dispose of rest of line
    }
 }
  return ret_val;
 }

