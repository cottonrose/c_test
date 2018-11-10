#ifndef __COMMENT_CONVERT_H__
#define __COMMENT_CONVERT_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum State   //创建一个枚举类型用来存放四种状态
{
	NUL_STATE,
	C_STATE,
	CPP_STATE,
	END_STATE
}State;

void CommentCovert(FILE *pfRead,FILE *pfWrite); //注释转换函数
void DoNulState(FILE *pfRead,FILE *pfWrite,State *ps); //正常代码状态下的函数
void DoCState(FILE *pfRead,FILE *pfWrite,State *ps); //C注释状态下的函数
void DoCppState(FILE *pfRead,FILE *pfWrite,State *ps); //C++注释状态下的函数



#endif //__COMMENT_CONVERT_H__