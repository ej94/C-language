#include<stdio.h>
#include <conio.h>


char board[3][3] = 
                {{'1','2','3'},
                 {'4','5','6'},
                 {'7','8','9'}};
int player=0,choice=0;
int CheckForWin();
void drawboard();
void markboard(	char mark);

int main(void)
{
    int gamestatus=0;
    char mark;
    player=1;
    
   do
    {
        //���e���� 
		drawboard();
        //�p�GPlayer���H2���l�ƬO1(�]�N�O�u)�Aplayer�N�O1�A��l�N�O2 
		player = (player % 2) ? 1 : 2;
	    printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        //�p�GPlayerg�O1���ܡAmark�OX ��l�N�O O 
        mark = (player == 1) ? 'X' : 'O';
        //�}�l�e�� 
        markboard(mark);
		//�M�w�C�����A        
        gamestatus = checkwin();
        //PLAYER���Ʀr�۰ʥ[1 
		player++;
        
		
		     
    }while (gamestatus ==  - 1);
    
    if (gamestatus == 1)
    printf("==>\aPlayer %d win ", --player);
    else
    printf("==>\aGame draw");
    
    return 0;
}
//��ܤ��r�C���e�� 
void drawboard()
{
	system("cls");
	printf("\n\n      Tic Tac Toe\n");
    printf("\nPlayer 1(X) - Player 2(O) \n");
	printf("\n\n");
    printf(" %c | %c | %c\n",board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n",board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n",board[2][0], board[2][1], board[2][2]);
    
	
}

int checkwin()
{
	//���r�C������1,2,3�s�b�@�_���ɭԡAgame over �M�w�Ӫ� 
    if (board[0][0] ==  board[0][1] && board[0][1] ==  board[0][2])
        return 1;
    //���r�C������4,5,6�s�b�@�_���ɭԡAgame over �èM�w�Ӫ�    
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
        return 1;
    //���r�C������7,8,9�s�b�@�_���ɭԡAgame over �èM�w�Ӫ�    
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
        return 1;
    //���r�C������1,4,7�s�b�@�_���ɭԡAgame over �èM�w�Ӫ� 
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
        return 1;
    //���r�C������2,5,8�s�b�@�_���ɭԡAgame over �èM�w�Ӫ� 
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
        return 1;
     //���r�C������3,6,9�s�b�@�_���ɭԡAgame over �èM�w�Ӫ�   
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
        return 1;
     //���r�C������1,5,9�s�b�@�_���ɭԡAgame over �èM�w�Ӫ� 
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
     //���r�C������3,5,7�s�b�@�_���ɭԡAgame over �èM�w�Ӫ�   
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;
    //�Y����L���p�N�^��-1�A�]���S����Ĺ 
	else
        return  - 1;
}

//�T�w�e�OX��0 
void markboard(	char mark)
{
        if (choice == 1 && board[0][0] == '1')
        {
		    board[0][0] = mark;
        }
        else if (choice == 2 && board[0][1] == '2')
        {
			            board[0][1] = mark;
        }
        else if (choice == 3 && board[0][2] == '3')
        {
				    board[0][2] = mark;
        }
        else if (choice == 4 && board[1][0] == '4')
        {
                   board[1][0] = mark;
        }
        else if (choice == 5 && board[1][1] == '5')
        {
			    board[1][1] = mark;
        }
        else if (choice == 6 && board[1][2] == '6')
        {
			   board[1][2] = mark;
        }
        else if (choice == 7 && board[2][0] == '7')
        {
			   board[2][0] = mark;
        }
        else if (choice == 8 && board[2][1] == '8')
        {
			   board[2][1] = mark;
        }
        else if (choice == 9 && board[2][2] == '9')
        {
			    board[2][2] = mark;
        }
        else
        {
            printf("Invalid move ");
			player--;
            getch();
        }
}
