#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "CommentConvert.h"

void test()
{
	FILE *pfRead = NULL; //����һ���������ڶ�input.c�ļ����в���
	FILE *pfWrite = NULL; //����һ���������ڶ�output.c�ļ����в���
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
	//ע��ת��
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