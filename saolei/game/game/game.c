#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	memset(board,set,rows*cols*sizeof(board[0][0]));
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int i = rand()%row+1;
		int j = rand()%col+1;
		if(board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}

void PrintBoard(char board[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	int n = 0;
	for(n=0; n<=col;n++)
	{
		printf("----");
	}
	printf("\n");
	//行号
	for(i=0; i<=row; i++)
	{
		printf(" %d |",i);
	}
	printf("\n");

	for(i=1; i<=row; i++)
	{
		//列号
		for(n=0 ;n<=col; n++)
		{
			printf("---+");
		}
		printf("\n %d |",i);
		//打印棋盘
		for(j=1; j<=col; j++)
		{
			printf(" %c |",board[i][j]);
		}
		printf("\n");
	}
	for(n=0; n<=col;n++)
	{
		printf("----");
	}
	printf("\n");
}

static void GetMineCount(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	count = mine[x-1][y]+
		mine[x-1][y-1]+
		mine[x][y-1]+
		mine[x+1][y-1]+
		mine[x+1][y]+
		mine[x+1][y+1]+
		mine[x][y+1]+
		mine[x-1][y+1]
		-8*'0';
	if(count == 0)
	{
		show[x][y] = ' ';
		for(i=-1;i<2;i++)
		{
			for(j=-1;j<2;j++)
			{
				if(mine[x+i][y+j]=='0' && show[x+i][y+j]=='*')
					GetMineCount(mine, show, x+i, y+j);
			}
		}
	}
	else
	{
		show[x][y] = count + '0';
	}
}

static int Count(char show[ROWS][COLS], int row, int col)
{
	int total = 0;
	int i = 0;
	int j = 0;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			if(show[i][j]=='*')
			{
				total++;
			}
		}
	}
	return total;
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int flag = 1;
	while(1)
	{
		printf("请输入坐标：\n");
		scanf("%d %d",&x,&y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if(mine[x][y] == '1')
			{
				if(flag)
				{
					do
					{
						InitBoard(mine,ROWS,COLS,'0');
						SetMine(mine,ROW,COL);
					}while(mine[x][y]=='1');
					flag = 0;
					goto flag;
				}
				printf("很抱歉，你被炸死了\n");
				PrintBoard(mine,ROW,COL);
				break;
			}
			flag = 0;
flag:;
			GetMineCount(mine, show, x, y);

			if(Count(show, row, col) == EASY_COUNT)
			{
				printf("恭喜你，排雷成功\n");
				PrintBoard(mine,ROW,COL);
				break;
			}
			PrintBoard(show,ROW,COL);
		}
		else
		{
			printf("非法坐标，请重新输入：\n");
		}
	}
}