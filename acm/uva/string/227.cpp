//2016-10-20-22.51
//UVa227

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char board[5][5];
char ord[50];
int x, y;
bool getboard()
{
    memset(board, 0, sizeof(board));
    char in[8];
    for (int i = 0; i < 5; i++)
    {
        gets(in);
        if (i == 0 && in[0] == 'Z') return 0;
        for (int j = 0; j < 5; j++)
        {
            board[i][j] = in[j];
            if (in[j] == ' ') {x = i; y = j;}
        }
    }
    return 1;
}
void printboard()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0;; j++)
        {
            printf("%c", board[i][j]);
            if (j != 4) printf(" ");
            else break;
        }
        printf("\n");
    }
}
bool mov(char in)
{
    if (in == 'A')
    {
        if (y - 1 >= 0) {swap(board[x][y], board[x][y - 1]); y--;}
        else return 0;
    }
    if (in == 'B')
    {
        if (y + 1 < 5) {swap(board[x][y], board[x][y + 1]); y++;}
        else return 0;
    }
    if (in == 'L')
    {
        if (x - 1 >= 0) {swap(board[x][y], board[x - 1][y]); x++;}
        else return 0;
    }
    if (in == 'R')
    {
        if (x + 1 < 5) {swap(board[x][y], board[x - 1][y]); x++;}
        else return 0;
    }
    return 1;
}

int main()
{
    int con = 1;
    while (getboard())
    {
        printboard();
        scanf("%s", ord);
        int len = strlen(ord);
        bool flag = 0;
        for (int i = 0; i < len; i++)
        {
            if (ord[i] != '0')
            {
                if (!mov(ord[i])) {flag = 1; break;}
            }
            else break;
        }
        printf("Puzzle #%d:\n", con++);
        if (flag) puts("This puzzle has no final configuration.");
        else printboard();
    }
}
