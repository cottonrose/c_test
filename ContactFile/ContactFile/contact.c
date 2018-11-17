#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "contact.h"

void LoadContact(pContact p)
{
	FILE *pf = fopen("contact.txt","rb");
	PeoInfo tmp = {0};
	if(pf == NULL)
	{
		perror("open file for load");
		exit(EXIT_FAILURE);
	}
	while(fread(&tmp,sizeof(PeoInfo),1,pf))
	{
		if(check_capacity(p)==0)
		{
			exit(EXIT_FAILURE);
		}
		p->data[p->sz] = tmp;
		p->sz++;
	}
	fclose(pf);
	pf = NULL;
}

int Find(pContact p,char *name)
{
	int i = 0;
	assert(p);
	for(i=0; i<p->sz; i++)
	{
		if(strcmp(p->data[i].name,name)==0)
			return i;
	}
	return -1;
}

void InitContact(pContact p)
{
	assert(p);
	p->sz = 0;
	p->data = (PeoInfo *)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	p->capacity = DEFAULT_SZ;
	//加载文件
	LoadContact(p);//读文件
}

int check_capacity(pContact p)
{
	if(p->sz == p->capacity)
	{
		PeoInfo *tmp = (PeoInfo *)realloc(p->data,(p->capacity+2)*sizeof(PeoInfo));
		if(tmp != NULL)
		{
			p->data = tmp;
			p->capacity += 2;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			printf("增容失败\n");
			return 0;
		}
	}
	return 1;
}

void AddContact(pContact p)
{
	assert(p);
	if(check_capacity(p)==0)
	{
		return;
	}
	printf("请输入姓名：");
	scanf("%s",p->data[p->sz].name);
	printf("请输入年龄：");
	scanf("%d",&p->data[p->sz].age);
	printf("请输入性别：");
	scanf("%s",p->data[p->sz].sex);
	printf("请输入电话：");
	scanf("%s",p->data[p->sz].num);
	printf("请输入地址：");
	scanf("%s",p->data[p->sz].adr);
	printf("添加成功\n");
	p->sz++;
}

void ShowContact(pContact p)
{
	int i = 0;
	assert(p);
	printf("%10s%5s%10s%15s%20s\n","name","age","sex","num","adress");
	for(i=0; i<p->sz; i++)
	{
		printf("%10s%5d%10s%15s%20s\n",p->data[i].name,p->data[i].age,p->data[i].sex,p->data[i].num,p->data[i].adr);
	}
}

void SubContact(pContact p)
{
	int pos = 0;
	int i = 0;
	char name[NAME_MAX] = {0};
	assert(p);
	if(p->sz==0)
	{
		printf("通讯录已空，删除失败\n");
		return;
	}
	printf("请输入要删除的人的姓名：");
	scanf("%s",name);
	pos = Find(p,name);
	if(pos == -1)
	{
		printf("该联系人不存在，删除失败\n");
		return ;
	}
	for(i=pos; i<p->sz-1; i++)
	{
		p->data[i] = p->data[i+1];
	}
	p->sz--;
	printf("删除成功\n");
}

void SearchContact(pContact p)
{

	int pos = 0;
	char name[NAME_MAX] = {0};
	assert(p);
	printf("请输入要查找的人的姓名：");
	scanf("%s",name);
	pos = Find(p,name);
	if(pos == -1)
	{
		printf("该联系人不存在，删除失败\n");
		return ;
	}
	printf("%10s%5s%10s%15s%20s\n","name","age","sex","num","adress");
	printf("%10s%5d%10s%15s%20s\n",p->data[pos].name,p->data[pos].age,p->data[pos].sex,p->data[pos].num,p->data[pos].adr);
}

void ModifyContact(pContact p)
{
	int pos = 0;
	char name[NAME_MAX] = {0};
	assert(p);
	printf("请输入要修改的人的姓名：");
	scanf("%s",name);
	pos = Find(p,name);
	if(pos == -1)
	{
		printf("该联系人不存在，修改失败\n");
		return ;
	}
	printf("请输入姓名：");
	scanf("%s",p->data[pos].name);
	printf("请输入年龄：");
	scanf("%d",&p->data[pos].age);
	printf("请输入性别：");
	scanf("%s",p->data[pos].sex);
	printf("请输入电话：");
	scanf("%s",p->data[pos].num);
	printf("请输入地址：");
	scanf("%s",p->data[pos].adr);
	printf("修改成功\n");
}

void SaveContact(pContact p)
{
	FILE *pf = fopen("contact.txt","wb");
	int i = 0;
	if(pf==NULL)
	{
		perror("open file for save");
		exit(EXIT_FAILURE);
	}
	//开始保存
	for(i=0; i<p->sz; i++)
	{
		fwrite(p->data+i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

void EmptyContact(pContact p)
{
	assert(p);
	p->sz = 0;
}

void SortContact(pContact p)
{
	int i = 0;
	int j = 0;
	assert(p);
	for(i=0; i<p->sz; i++)
	{
		for(j=i+1; j<p->sz; j++)
		{
			if(strcmp(p->data[i].name,p->data[j].name)>0)
			{
				PeoInfo tmp = p->data[i];
				p->data[i] = p->data[j];
				p->data[j] = tmp;
			}
		}
	}
	printf("排序成功\n");
}

void DestoryContact(pContact p)
{
	assert(p);
	free(p->data);
	p->data = NULL;
	p->sz = 0;
	p->capacity = 0;
}