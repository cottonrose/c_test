#include <stdio.h>
#include "CommentConvert.h"

void CommentCovert(FILE *pfRead,FILE *pfWrite)
{
	State state = NUL_STATE;
	while(state != END_STATE) //����Ч״̬��ִ���������
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

//��������״̬����
void DoNulState(FILE *pfRead,FILE *pfWrite,State *ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '/': //��һ���ַ�Ϊ'/',�ж�֮��ĵڶ�λ�������Ƿ���Cע�Ͳ��ֻ���C++ע�Ͳ���
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
	case EOF://�ж��ַ��Ƿ����ļ�������־
		*ps = END_STATE;
		break;
	default:
		fputc(first,pfWrite);
		break;
	}
}

//Cע��״̬����
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
			case '/'://�ж��Ƿ�����Cע�ͽ�����־
				{
					int third = fgetc(pfRead);
					if((third != '\n'))//�ж�Cע�ͽ������Ƿ�����������
					{
						if(third == '/')//���Cע���Ƿ�Ϊ����ע������
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
			case '*'://���������**/����
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
	case '\n'://�������ע������
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

//C++ע��״̬����
void DoCppState(FILE *pfRead,FILE *pfWrite,State *ps)
{
	int first = fgetc(pfRead);
	switch(first)
	{
	case '\n'://�ж�C++ע���Ƿ����
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