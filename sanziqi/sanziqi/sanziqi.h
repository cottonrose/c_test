#ifndef __GAME_H__
#define __GAME_H__

#define ROW 5
#define COL 5
#define NUM 3

void InitBoard(char board[ROW][COL],int row,int col);
void PrintBoard(char board[ROW][COL],int row,int col);
void Player(char board[ROW][COL],int row,int col);
void Computer(char board[ROW][COL],int row,int col,int num);
char Judge(char board[ROW][COL],int row,int col,int num);

#endif
