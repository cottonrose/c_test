#define _CRT_SECURE_NO_WARNINGS 1

//1.��������ʹ����ȫ����λ��ż��ǰ�档 
//
//��Ŀ�� 
//
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡� 
//
//#include <stdio.h>
//
//void Change(int arr[],int sz)
//{
//	int i = 0;
//	int j = sz-1;
//	int ret = 0;
//	while(i<=j)
//	{
//		if(arr[i]%2==0)
//		{
//			if(arr[j]%2!=0)
//			{
//				ret = arr[i];
//				arr[i] = arr[j];
//				arr[j] = ret;
//				j--;
//				i++;
//			}
//			else
//			{
//				j--;
//			}
//		}
//		else
//		{
//			i++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("������10��������\n");
//	for(i=0; i<10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	Change(arr,sz);
//	printf("�������������Ϊ��\n");
//	for(i=0; i<10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//
//2. 
//
////���Ͼ��� 
//��һ����ά����. 
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����. 
//�������������в���һ�������Ƿ���ڡ� 
//ʱ�临�Ӷ�С��O(N); 
//
//���飺 
//1 2 3 
//2 3 4 
//3 4 5 
//
//
//1 3 4 
//2 4 5 
//4 5 6 
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
void InitArr(int arr[][N], int sz)
{
	int i = 1;
	int *p = &arr[0][0];
	*p = rand()%10+1;
	while(i<sz)
	{
		*(p+1) = *p + rand()%10+1; 
		p++;
		i++;
	}

}

void Print(int arr[][N])
{
	int i = 0;
	int j = 0;
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
}
//���ֲ���ʵ��
int Find(int arr[][N], int num, int sz)
{
	int *left = &arr[0][0];
	int *right = &arr[N-1][N-1];
	int mid = sz/2;
	int ret = 0;
	while(left<=right)
	{
		if(num<(*(left+mid)))
		{
			right = left+mid-1;
			mid /= 2;
		}
		else if(num>(*(left+mid)))
		{
			left = left+mid+1;
			mid += mid/2; 
		}
		else if(num == (*(left+mid)))
		{
			ret = 1;
			break;
		}
	}
	return ret;
}

//ͨ�����Ҷ���Ԫ�ضԱ�ʵ�֣�Ҫ����Ԫ�رȵ�ǰλ��Ԫ�ش�������һ�У��ȵ�ǰλ��С��������һ�У�
//int Find(int arr[][N], int num, int sz)
//{
//	int i = 0;
//	int j = N-1;
//	int ret = 0;
//	while(i<N && j>0)
//	{
//		if(num > arr[i][j])
//		{
//			i++;
//		}
//		else if(num < arr[i][j])
//		{
//			j--;
//		}
//		else 
//		{
//			ret = 1;
//			break;
//		}
//	}
//	return ret;
//}
//
int main()
{
	int arr[N][N] = {0};
	int num = 0;
	int ret = 0;
	int sz = sizeof(arr)/sizeof(arr[0][0]);
	srand((unsigned int)time(NULL));
	InitArr(arr,sz);
	printf("������Ҫ���ҵ����֣�\n");
	scanf("%d",&num);
	ret = Find(arr,num,sz);
	if(ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
	Print(arr);
	return 0;
}