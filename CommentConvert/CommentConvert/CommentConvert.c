#include <stdio.h>
#include "CommentConvert.h"

void CommentCovert(FILE *pfRead,FILE *pfWrite)
{
	State state = NUL_STATE;
	while(state != END_STATE) //在有效状态下执行下面程序
	{
		switch(state)
		{
		case NUL_STATE: 
			DoNulState(pfRead,pfWrite,&state);
			break;
		case C_STATE:
			DoCState(pfRead,pfWrite,&state);
			break;
		case CPP_STATE:
			DoCppState(pfRead,pfWrite,&state);
			break;
		}
	}
}

//正常代码状态函数
void DoNulState(FILE *pfRead,FILE *pfWrite,State *ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '/': //第一个字符为'/',判断之后的第二位，看其是否是C注释部分或者C++注释部分
		{
			int second = fgetc(pfRead);
			switch(second)
			{
			case '*':
				{
					fputc('/',pfWrite);
					fputc('/',pfWrite);
					*ps = C_STATE;
				}
				break;
			case '/':
				{
					fputc(first,pfWrite);
					fputc(second,pfWrite);
					*ps = CPP_STATE;
				}
				break;
			default:
				{
					fputc(first,pfWrite);
					fputc(second,pfWrite);
				}
				break;
			}
		}
		break;
	case EOF://判断字符是否是文件结束标志
		*ps = END_STATE;
		break;
	default:
		fputc(first,pfWrite);
		break;
	}
}

//C注释状态函数
void DoCState(FILE *pfRead,FILE *pfWrite,State *ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '*':
		{
			int second = fgetc(pfRead);
			switch(second)
			{
			case '/'://判断是否遇到C注释结束标志
				{
					int third = fgetc(pfRead);
					if((third != '\n'))//判断C注释结束后是否有正常代码
					{
						if(third == '/')//解决C注释是否为连续注释问题
						{
							int forth = fgetc(pfRead);
							if(forth == '*')
							{
								ungetc(forth,pfRead);
								ungetc(third,pfRead);
							}
							else
							{
								fputc('\n',pfWrite);
								ungetc(forth,pfRead);
								ungetc(third,pfRead);
							}
						}
						else
						{
							fputc('\n',pfWrite);
						    ungetc(third,pfRead);
						}
			
					}
					else
					{
						fputc(third,pfWrite);
						
					}
					*ps = NUL_STATE;
				}
				break;
			case '*'://解决连续的**/问题
				{
					fputc(first,pfWrite);
					ungetc(second,pfRead);
				}
				//
				break;
			default:
				{
					fputc(first,pfWrite);
					fputc(second,pfWrite);
				}
				break;
			}
		}
		break;
	case '\n'://解决多行注释问题
		{
			int second = fgetc(pfRead);
			fputc(first,pfWrite);
			switch(second)
			{
			case '/':
				{
					int third = fgetc(pfRead);
					if(third == '/')
					{
						fputc(second,pfWrite);
						fputc(third,pfWrite);
					}
					else
					{
						fputc('/',pfWrite);
						fputc('/',pfWrite);
						fputc(second,pfWrite);
						fputc(third,pfWrite);
					}
				}
				break;
			case '*':
				{
					int third = fgetc(pfRead);
					if(third == '/')
					{
						*ps = NUL_STATE;
					}
					else
					{
						fputc(second,pfWrite);
						fputc(third,pfWrite);
					}
				}
				break;
			default:
				{
					fputc('/',pfWrite);
					fputc('/',pfWrite);
					fputc(second,pfWrite);
				}
				break;
			}
		}
		break;
	default:
		fputc(first,pfWrite);
		break;
	}
}

//C++注释状态函数
void DoCppState(FILE *pfRead,FILE *pfWrite,State *ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '\n'://判断C++注释是否结束
		{
			fputc(first,pfWrite);
			*ps = NUL_STATE;
		}
		break;
	case EOF:
		*ps = END_STATE;
		break;
	default:
		fputc(first,pfWrite);
		break;
	}
}