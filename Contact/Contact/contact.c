#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "contact.h"


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
	memset(p->data,0,sizeof(p->data));
}

void AddContact(pContact p)
{
	assert(p);
	if(p->sz>=MAX)
	{
		printf("ͨѶ¼�������½���ϵ��ʧ��\n");
		return ;
	}
	printf("������������");
	scanf("%s",p->data[p->sz].name);
	printf("���������䣺");
	scanf("%d",&p->data[p->sz].age);
	printf("�������Ա�");
	scanf("%s",p->data[p->sz].sex);
	printf("������绰��");
	scanf("%s",p->data[p->sz].num);
	printf("�������ַ��");
	scanf("%s",p->data[p->sz].adr);
	printf("��ӳɹ�\n");
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
		printf("ͨѶ¼�ѿգ�ɾ��ʧ��\n");
		return;
	}
	printf("������Ҫɾ�����˵�������");
	scanf("%s",name);
	pos = Find(p,name);
	if(pos == -1)
	{
		printf("����ϵ�˲����ڣ�ɾ��ʧ��\n");
		return ;
	}
	for(i=pos; i<p->sz-1; i++)
	{
		p->data[i] = p->data[i+1];
	}
	p->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(pContact p)
{

	int pos = 0;
	char name[NAME_MAX] = {0};
	assert(p);
	printf("������Ҫ���ҵ��˵�������");
	scanf("%s",name);
	pos = Find(p,name);
	if(pos == -1)
	{
		printf("����ϵ�˲����ڣ�ɾ��ʧ��\n");
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
	printf("������Ҫ�޸ĵ��˵�������");
	scanf("%s",name);
	pos = Find(p,name);
	if(pos == -1)
	{
		printf("����ϵ�˲����ڣ��޸�ʧ��\n");
		return ;
	}
	printf("������������");
	scanf("%s",p->data[pos].name);
	printf("���������䣺");
	scanf("%d",&p->data[pos].age);
	printf("�������Ա�");
	scanf("%s",p->data[pos].sex);
	printf("������绰��");
	scanf("%s",p->data[pos].num);
	printf("�������ַ��");
	scanf("%s",p->data[pos].adr);
	printf("�޸ĳɹ�\n");
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
	printf("����ɹ�\n");
}