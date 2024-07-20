#include <stdio.h>
#include <stdlib.h>

void graphics();
void game();
void replace_box(int i, int j,int c);
char win_loose_draw();
void again();
int num_check(int n);

static int data[9];
static char board[5][15] = {
    " 1 | 2 | 3 ",
    "-----------",
    " 4 | 5 | 6 ",
    "-----------",
    " 7 | 8 | 9 ",
};
static int choice;

int main()
{
        printf("\n\n\t------WELCOME TO TIC TAC TOE------\n\n");
        graphics();
        printf("\n\nWE WILL BE STARTING FROM 'O'\n");
        game();
    return 0;
}
void again()
{
    getchar();
    char ch;
    printf("\n\nDo You want To Play Again? (y/n)\n ");
    scanf("%c",&ch);
    if(ch=='y')
    {
        main();
    }
    else{
        exit(0);
    }
}

void game()
{
    static int cnt=0;
    int i,j,x;
    for(x=1;x<=9;x++){
        printf("\n\nPlayer ");
        if(cnt % 2 == 0)
        {
            printf("O:\n");
        }
        else{
            printf("X:\n");
        }
        printf("Enter the number: ");
        scanf("%d", &choice);
        if(num_check(choice)==0){
            data[cnt] = choice;
            if(choice >= 1 && choice <= 3)
            {
                i=0;
                j=4*choice-3;
                cnt++;
            }
            else if(choice >= 4 && choice <= 6)
            {
                i=2;
                j=4*(choice-3)-3;
                cnt++;
            }
            else if(choice >= 7 && choice <= 9)
            {
                i=4;
                j=4*(choice-6)-3;
                cnt++;
            }
            else{
                printf("\n\nInalid choice");
                game();
            }
            replace_box(i,j,cnt);
        }
        else{
            printf("\n\n%d is already Choosen, Choose another Number",choice);
        }
    }
}

void replace_box(int i, int j,int c)
{
    if( c % 2 == 0)
    {
        board[i][j] = 'X';
    }
    else
    {
        board[i][j] = 'O';
    }
    graphics();
    char result = win_loose_draw();
    if(result != 'N')
    {
        printf("\n\nPlayer %c Wins!", result);
        again();

    }
    else if(result == 'N' && c==9)
    {
        printf("\n\nGame is Draw");
        again();
    }
}

char win_loose_draw()
{
    int i;
    for(i=0;i<=5;i+=2)
    {
        if(board[i][1] == board[i][5] && board[i][1] == board[i][9]) //Check Horizontal Rows
        {
            return board[i][1];
        }
    }
    for(i=1;i<=9;i+=4)
    {
        if(board[0][i] == board[2][i] && board[0][i] == board[4][i]) //Check Vertical Columns
        {
            return board[0][i];
        }
    }
    if(board[0][1] == board[2][5] && board[0][1] == board[4][9]) //Check main diagonal
        {
            return board[0][1];
        }
    else if(board[0][9] == board[2][5] && board[0][9] == board[4][1]) //Check secondry diagonal
        {
            return board[0][9];
        }
    return 'N';
}

void graphics()
{
    int i,j;
    printf("\n\n");
    for(i = 0 ; i < 5 ; i++ )
    {
        for(j = 0 ; j < 15 ; j++)
        {
            printf("%c",board[i][j]);
        }
        printf("\n");
    }
}

int num_check(int n)
{
    int i;
    if(n==0)
    {
        printf("\n\nInvalid Input\n");
        game();

    }
    for(i=0;i<9;i++)
    {
        if(data[i]==n)
        {
            return 1;
        }
    }
    return 0;
}