#define _CRT_SECURE_NO_WARNINGS 1

//1.调整数组使奇数全部都位于偶数前面。 
//
//题目： 
//
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。 
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
//	printf("请输入10个整数：\n");
//	for(i=0; i<10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	Change(arr,sz);
//	printf("交换过后的数组为：\n");
//	for(i=0; i<10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//
//2. 
//
////杨氏矩阵 
//有一个二维数组. 
//数组的每行从左到右是递增的，每列从上到下是递增的. 
//在这样的数组中查找一个数字是否存在。 
//时间复杂度小于O(N); 
//
//数组： 
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
//二分查找实现
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

//通过与右顶角元素对比实现（要查找元素比当前位置元素大，向下走一行，比当前位置小，向左走一列）
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
	printf("请输入要查找的数字：\n");
	scanf("%d",&num);
	ret = Find(arr,num,sz);
	if(ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	Print(arr);
	return 0;
}