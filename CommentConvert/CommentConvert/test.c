#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "CommentConvert.h"

void test()
{
	FILE *pfRead = NULL; //创建一个变量用于对input.c文件进行操作
	FILE *pfWrite = NULL; //创建一个变量用于对output.c文件进行操作
    pfRead = fopen("input.c","r");
	if(pfRead == NULL)
	{
		perror("open file for read");
	}
	pfWrite = fopen("output.c","w");
	if(pfWrite == NULL)
	{
		perror("open file for write");
	}
	//注释转换
	CommentCovert(pfRead,pfWrite);

	fclose(pfRead);
	pfRead = NULL;
	fclose(pfWrite);
	pfWrite = NULL;
	return;
}

int main()
{
	test();
	return 0;
}