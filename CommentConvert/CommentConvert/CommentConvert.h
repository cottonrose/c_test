#ifndef __COMMENT_CONVERT_H__
#define __COMMENT_CONVERT_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum State   //����һ��ö�����������������״̬
{
	NUL_STATE,
	C_STATE,
	CPP_STATE,
	END_STATE
}State;

void CommentCovert(FILE *pfRead,FILE *pfWrite); //ע��ת������
void DoNulState(FILE *pfRead,FILE *pfWrite,State *ps); //��������״̬�µĺ���
void DoCState(FILE *pfRead,FILE *pfWrite,State *ps); //Cע��״̬�µĺ���
void DoCppState(FILE *pfRead,FILE *pfWrite,State *ps); //C++ע��״̬�µĺ���



#endif //__COMMENT_CONVERT_H__