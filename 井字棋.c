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
        //先畫版面 
		drawboard();
        //如果Player除以2的餘數是1(也就是真)，player就是1，其餘就是2 
		player = (player % 2) ? 1 : 2;
	    printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        //如果Playerg是1的話，mark是X 其餘就是 O 
        mark = (player == 1) ? 'X' : 'O';
        //開始畫版 
        markboard(mark);
		//決定遊戲狀態        
        gamestatus = checkwin();
        //PLAYER的數字自動加1 
		player++;
        
		
		     
    }while (gamestatus ==  - 1);
    
    if (gamestatus == 1)
    printf("==>\aPlayer %d win ", --player);
    else
    printf("==>\aGame draw");
    
    return 0;
}
//顯示井字遊戲畫版 
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
	//當井字遊戲內的1,2,3連在一起的時候，game over 決定勝者 
    if (board[0][0] ==  board[0][1] && board[0][1] ==  board[0][2])
        return 1;
    //當井字遊戲內的4,5,6連在一起的時候，game over 並決定勝者    
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
        return 1;
    //當井字遊戲內的7,8,9連在一起的時候，game over 並決定勝者    
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
        return 1;
    //當井字遊戲內的1,4,7連在一起的時候，game over 並決定勝者 
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
        return 1;
    //當井字遊戲內的2,5,8連在一起的時候，game over 並決定勝者 
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
        return 1;
     //當井字遊戲內的3,6,9連在一起的時候，game over 並決定勝者   
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
        return 1;
     //當井字遊戲內的1,5,9連在一起的時候，game over 並決定勝者 
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
     //當井字遊戲內的3,5,7連在一起的時候，game over 並決定勝者   
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;
    //若有其他情況就回傳-1，因為沒有輸贏 
	else
        return  - 1;
}

//確定畫板X或0 
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
