#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "contact.h"

void menu()
{
	printf("*******************************\n");
	printf("***    1.Add      2.Sub    ***\n");
	printf("***    3.Search   4.Sort   ***\n");
	printf("***    5.Show     6.Modify ***\n");
	printf("***    7.Empty    0.Exit   ***\n");
	printf("*******************************\n");
}
enum Select
{
	EXIT,
	ADD,
	SUB,
	SEARCH,
	SORT,
	SHOW,
	MODIFY,
	EMPTY
};

void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ£º\n");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case SUB:
			SubContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case EXIT:
			printf("ÍË³ö\n");
			break;
		default:
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}