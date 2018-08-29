#include<stdio.h>

#include<stdlib.h>



struct item

{

        char *itemName;

        int Quantity;

        float Price;

        float Amount;

};



void ReadName(struct item *P)

{

        printf("Enter The ItemName :");

        scanf("%s", P->itemName);

        printf("Enter The Quantity : ");

        scanf("%d", &P->Quantity);

        printf("Price :");

        scanf("%f", &P->Price);

        P->Amount = (float)P->Quantity * P->Price;


}



void PrintItem(struct item *P)

{

        printf("\n\nItemName : %s",P->itemName);

        printf("\nQuantity : %i",P->Quantity);

        printf("\nPrice : %.2f",P->Price);

        printf("\nAmount : %.2f",P->Amount);

}

int main()

{

        struct item *ptr1 = NULL;

        struct item item1;

        ptr1 = &item1;

        ptr1->itemName = (char*) malloc(30 * sizeof(char));

        if(ptr1==NULL)
        {
            exit(-1);
        }
        ReadName(ptr1);

        PrintItem(ptr1);

        free(ptr1->itemName);

        return 0;

}
