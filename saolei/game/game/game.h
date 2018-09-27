#ifndef __GAME_H__
#define __GAME_H__

#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void SetMine(char board[ROWS][COLS],int row,int col);
void PrintBoard(char board[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

#endif //__GAME_H__