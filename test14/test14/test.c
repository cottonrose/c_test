#define _CRT_SECURE_NO_WARNINGS 1

//1.实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA 
//ABCD左旋两个字符得到CDAB 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void Change(char *left, char *right)
//{
//	assert(left && right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void ReverseArr(char *arr,int ret,int n)
//{
//	char *start = arr;
//	char *over = start+n-1;
//	char *begin = over+1;
//	char *end = arr+ret-1;
//	Change(start,over);
//	Change(begin,end);
//	Change(start,end);
//}
//
//int main()
//{
//	char arr[] = "ABCDEFGH";
//	int n = 0;
//	int ret = strlen(arr);
//	printf("%s\n",arr);
//	printf("请输入要旋转的个数：\n");
//	scanf("%d",&n);
//	ReverseArr(arr,ret,n);
//	printf("旋转过后：\n%s\n",arr);
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 ＝ AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
//
//
//AABCD左旋一个字符得到ABCDA 
//AABCD左旋两个字符得到BCDAA 
//
//AABCD右旋一个字符得到DAABC 

//s1: AEBCD
//s2: BCDAE
//指针p1指向s1的起始位置，p2指向s2的起始位置；
//p1向后移动直到找到与p2相等的字符时，p2开始移动，并一个个判断字符是否相等，直到s1字符串结束；
//将p1再指向s1的起始位置，与p2一起移动，并一个个判断字符是否相等，直到s2字符串结束；
//此时判断完毕，p2指向s2的字符串结束位置，使返回值置1.

//#include <stdio.h>
//#include <string.h>
//
//int Judge(char *arr1, int n1, char *arr2, int n2)
//{
//	char *p1 = arr1;
//	char *p2 = arr2;
//	int ret = 0;
//	if(n1 != n2)
//		return ret;
//	else
//	{
//		while(*p1 != '\0')
//		{
//			if(*p1 != *p2)
//			{
//				p1++;
//			}
//			else
//			{
//				p1++;
//				p2++;
//			}
//		}
//		p1 = arr1;
//		while(*p2 != '\0')
//		{
//			if(*p1 == *p2)
//			{
//				p1++;
//				p2++;
//			}
//			else
//			{
//				ret = 0;
//				break;
//			}
//		}
//	}
//	if(*p2 == '\0')
//	{
//		ret = 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	char s1[] = "ABCDEF";
//	char s2[] = "GHIJKL";
//	int ret = Judge(s1,strlen(s1),s2,strlen(s2));
//	if(ret == 1)
//	{
//		printf("s1是s2旋转得到的\n");
//	}
//	else
//	{
//		printf("s1不是s2旋转得到的\n");
//	}
//	return 0;
//}

//3.写一篇博客，谈谈函数的调用过程，栈帧的创建和销毁。 
//链接贴博客内容并分享到群里。

#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a,b);
	printf("ret = %d\n",ret);
	return 0;
}
