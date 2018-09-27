#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = {0}; //布置雷的数组
	char show[ROWS][COLS] = {0}; //存放排查的坐标信息
	//初始化棋盘
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//布置雷
	SetMine(mine,ROW,COL);
	PrintBoard(mine,ROW,COL);

	//打印棋盘
	PrintBoard(show,ROW,COL);
	//排查雷
	FindMine(mine,show,ROW,COL);
}

void menu()
{
	printf("******************************\n");
	printf("******    1.开始游戏    ******\n");
	printf("******    0.退出游戏    ******\n");
	printf("******************************\n");

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	}while(input);

}

int main()
{
	test();
	return 0;
}