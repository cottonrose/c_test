#define _CRT_SECURE_NO_WARNINGS 1

//1.ת�Ʊ���������

//#include <stdio.h>
//
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 1.add    2.sub ***\n");
//	printf("*** 3.mul    4.div ***\n");
//	printf("***     0.exit     ***\n");
//	printf("**********************\n");
//}
//
//int add(int x, int y)
//{
//	return x+y;
//}
//int sub(int x, int y)
//{
//	return x-y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int div(int x, int y)
//{
//	return x/y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int ret = 0;
//	int (*p[5])(int x,int y) = {0,add,sub,mul,div};
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d",&input);
//		if((input>=1 && input<=4))
//		{
//			printf("�������������\n");
//			scanf("%d%d",&x,&y);
//			ret = (*p[input])(x,y);
//			printf("ret = %d\n",ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������룺\n");
//		}
//	}while(input);
//
//	return 0;
//}

//ģ��ʵ��qsort����
#include <stdio.h>
#include <stdlib.h>

int int_cmp(const void *e1 ,const void *e2)
{
	return (*(int *)e2)<*((int *)e1);
}

//����
void _swap(void *p1, void *p2, int size)
{
	int i = 0;
	for(i=0; i<size; i++)
	{
		char tmp = *((char *)p1+i);
		*((char *)p1+i) = *((char *)p2+i);
		*((char *)p2+i) = tmp;
	}
}

void my_qsort(void *base, size_t count, size_t width, int (*cmp)(const void *e1, const void *e2))
{
	int i = 0;
	int j = 0; //�趨ѭ������
	for(i=0; i<count; i++)
	{
		for(j=0; j<count-1-i; j++)
		{
			if(cmp((char *)base+j*width,(char *)base+(j+1)*width)>0) //�����������ʹ�����ṩ�ıȽ�����������Ԫ��λ��
			{
				_swap((char *)base+j*width,(char *)base+(j+1)*width,width);
			}
		}
	}
}

int main()
{
	int a[] = {9,8,7,6,5,4,3,2,1,0};
	int i = 0;
	my_qsort(a,sizeof(a)/sizeof(a[0]),sizeof(int),int_cmp);
	for(i=0; i<sizeof(a)/sizeof(a[0]); i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}