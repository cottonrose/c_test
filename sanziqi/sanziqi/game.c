#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "sanziqi.h"

char Isfull(char board[ROW][COL],int row,int col);

void InitBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			board[i][j]='+';
		}
	}

}

void PrintBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf(" |");
		}
		printf("\n");
		for(j=0; j<row; j++)
		{
			printf("-%c",board[i][j]);
		}
		printf("-\n");
	}
	for(j=0; j<col; j++)
	{
		printf(" |");
	}
	printf("\n");
}
int now_row = 0;
int now_col = 0;
void Player(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	while(1)
	{
		scanf("%d %d",&i,&j);
		now_row = i-1;
		now_col = j-1;
		if(now_row<row && now_col<col)
		{
			if(board[now_row][now_col]=='+')
			{
				board[now_row][now_col]='@';
				break;
			}
			else
			{
				printf("������Ч�����������룺\n");
			}
		}
		else
		{
			printf("������Ч�����������룺\n");
		}
	}
}

void Computer(char board[ROW][COL],int row,int col,int num)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char c = board[now_row][now_col];
	int a = 0;
	int b = 0;
	int ret = num-2;
	while(1)
	{
		//��ǰλ���е����ж�
		if((now_col<col-ret)&&(now_col >=1))
		{
			for(a= now_row,b= now_col; b<now_col+ret; b++)
			{
				if(board[a][b] != c)
				{
					break;
				}
			}
			if(b == now_col+ret)
			{
				if(board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if(board[a][b-ret-1] == '+')
				{
					board[a][b-ret-1] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ���е����ж�
		if((now_col >= ret) && (now_col < col-1))
		{
			for(a = now_row, b = now_col; b > now_col-ret; b--)
			{
				if(board[a][b] != c)
				{
					break;
				}
			}
			if(b == now_col-ret)
			{
				if(board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if(board[a][b+ret+1] == '+')
				{
					board[a][b+ret+1] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ���е����ж�
		if ((now_row >= ret) && (now_row < col - 1))
		{
			for (a = now_row, b = now_col; a > now_row-ret; a--)
			{
				if (board[a][b] != c)
				{
					break;
				}
			}
			if (a == now_row-ret)
			{
				if (board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if (board[a+ret+1][b] == '+')
				{
					board[a+ret+1][b] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ���е����ж�
		if ((now_row<col - ret) && (now_row >= 1))
		{
			for (a = now_row, b = now_col; a < now_col+ret; a++)
			{
				if (board[a][b] != c)
				{
					break;
				}
			}
			if (a == now_row + ret)
			{
				if (board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if (board[a-ret-1][b] == '+')
				{
					board[a-ret-1][b] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ�����¶Խ��ߵ��ж�
		if ((now_row < row-ret) && (now_col < col-ret) && (now_row >= 1) && (now_col >= 1))
		{
			for (a = now_row, b = now_col; a<now_row+ret && b<now_col+ret; a++, b++)
			{
				if (board[a][b] != c)
				{
					break;
				}
			}
			if ((a == now_row+ret) && (b == now_col+ret))
			{
				if (board[a][b] == '+')
				{
					board[a][b] = '0';
					goto exit;
				}
				else if (board[a-ret-1][b-ret-1] == '+')
				{
					board[a-ret-1][b-ret-1] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ�����¶Խ��ߵ��ж�
		if ((now_row < row-ret) && (now_col >= ret) && (now_row >= 1) && (now_col < col-1))
		{
			for (a = now_row, b = now_col; a<now_row+ret && b>now_col-ret; a++, b--)
			{
				if (board[a][b] != c)
				{
					break;
				}
			}
			if ((a == now_row+ret) && (b == now_col-ret))
			{
				if (board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if (board[a-ret-1][b+ret+1] == '+')
				{
					board[a-ret-1][b+ret+1] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ�����϶Խ��ߵ��ж�
		if ((now_row >= ret) && (now_col < row-ret) && (now_row < row-1) && (now_col >= 1))
		{
			for (a = now_row, b = now_col; a > now_row-ret && b < now_col+ret; a--, b++)
			{
				if (board[a][b] != c)
				{
					break;
				}
			}
			if ((a == now_row-ret) && (b == now_col+ret))
			{
				if (board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if (board[a+ret+1][b-ret-1] == '+')
				{
					board[a+ret+1][b-ret-1] = 'O';
					goto exit;
				}
			}
		}
		//��ǰλ�����϶Խ��ߵ��ж�
		if ((now_row >= ret) && (now_col >= ret) && (now_row < row-1) && (now_col < col-1))
		{
			for (a = now_row, b = now_col; a > now_row-ret && b > now_col-ret; a--, b--)
			{
				if (board[a][b] != c)
				{
					break;
				}
			}
			if ((a == now_row-ret) && (b == now_col-ret))
			{
				if (board[a][b] == '+')
				{
					board[a][b] = 'O';
					goto exit;
				}
				else if (board[a+ret+1][b+ret+1] == '+')
				{
					board[a+ret+1][b+ret+1] = 'O';
					goto exit;
				}
			}
		}

			i = rand() % row;
			j = rand() % row;
			if (board[i][j] == '+')
			{
				board[i][j] = 'O';
				goto exit;
				//break;
			}
	}
	exit:;
}

char Judge(char board[ROW][COL],int row,int col,int num)
{
	int i = 0;
	int j = 0;
	char ret = 0;
	char c = 0;
	int a = 0;
	int b = 0;
	int n = num-1;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j]!='+')
			{
				c = board[i][j];
				//�ж���
				if(j<col-n)
				{
						for(a=i,b=j; b<=j+n; b++)
						{
							if(board[a][b]!=c)
							{
								break;
							}
						}
						if((b>j+n))
						{
							return c;
						}
				}
				//�ж���
				if(i<row-n)
				{
						for(a=i,b=j; a<=i+n; a++)
						{
							if(board[a][b]!=c)
							{
								break;
							}
						}
						if((a>i+n))
						{
							return c;
						}
				}
				//�ж϶Խ���
				//�ж����¶Խ���
				if((i<row-n)&&(j<col-n))
				{
					for(a=i,b=j; (a<=i+n) && (b<=j+n);a++,b++)
					{
						if(board[a][b]!=c)
						{
							break;
						}
						if((a>i+n)&&(b>j+n))
						{
							return c;
						}
					}
				}
				//�ж����¶Խ���
				if((i<row-n)&&(j>=n))
				{
					for(a=i,b=j; (a<=i+n) && (b>=j-n); a++,b--)
					{
						if(board[a][b]!=c)
						{
							break;
						}
					}
					if((a>i+n)&&(b<j-n))
					{
						return c;
					}
				}
				//�ж����϶Խ���
				if((i>=n)&&(j<col-n))
				{
					for(a=i,b=j; (a>=i-n) && (b<=j+n); a--,b++)
					{
						if(board[a][b]!=c)
						{
							break;
						}
					}
					if((a<i-n)&&(b>j+n))
					{
						return c;
					}
				}
				//�ж����϶Խ���
				if((i>=n)&&(j>=n))
				{
					for(a=i,b=j; (a>=i-n) && (b>=j-n); a--,b--)
					{
						if(board[a][b]!=c)
						{
							break;
						}
					}
					if((a<i-n)&&(b<j-n))
					{
						return c;
					}
				}
			}
		}
	}
	//�ж��Ƿ�ƽ��
	ret = Isfull(board,ROW,COL);
	if(ret=='I')
	{
		return 'I';
	}
	return '+';
}

char Isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j]=='+')
			{
				return '+';
			}
		}
	}
	if(i==row && j==col)
	{
		return 'I';
	}
}


