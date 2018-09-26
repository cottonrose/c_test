#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "sanziqi.h"
#include <time.h>
#include <stdlib.h>

void game()
{
	char c = 0;
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	PrintBoard(board,ROW,COL);
	
	while(1)
	{
		printf("����ߣ�>\n");
		Player(board,ROW,COL);
		PrintBoard(board,ROW,COL);
		c = Judge(board,ROW,COL,NUM);
		if(c!='+')
		{
			break;
		}
		printf("�����ߣ�>\n");
		Computer(board,ROW,COL,NUM);
		PrintBoard(board,ROW,COL);
		c = Judge(board,ROW,COL,NUM);
		if(c!='+')
		{
			break;
		}
	}
	PrintBoard(board,ROW,COL);
	if(c=='@')
	{
		printf("���Ӯ\n");
	}
	else if(c=='O')
	{
		printf("����Ӯ\n");
	}
	else if(c=='I')
	{
		printf("ƽ��\n");
	}
	

}
void memu()
{
	printf("********************\n");
	printf("****   1.play   ****\n");
	printf("****   0.exit   ****\n");
	printf("********************\n");

}
void test()
{
	int n = 0;
	srand((unsigned)time(NULL));
	do
	{
		memu();
		printf("��ѡ��\n");
		scanf("%d",&n);
		if(n==1)
		{
			game();
		}
		else if(n==0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else 
		{
			printf("������������䣺\n");
		}
	}while(n);
}
 int main()
 {
	 test();
	 return 0;
 }