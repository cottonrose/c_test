#define _CRT_SECURE_NO_WARNINGS 1

//1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA 
//ABCD���������ַ��õ�CDAB 

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
//	printf("������Ҫ��ת�ĸ�����\n");
//	scanf("%d",&n);
//	ReverseArr(arr,ret,n);
//	printf("��ת����\n%s\n",arr);
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 �� AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0. 
//
//
//AABCD����һ���ַ��õ�ABCDA 
//AABCD���������ַ��õ�BCDAA 
//
//AABCD����һ���ַ��õ�DAABC 

//s1: AEBCD
//s2: BCDAE
//ָ��p1ָ��s1����ʼλ�ã�p2ָ��s2����ʼλ�ã�
//p1����ƶ�ֱ���ҵ���p2��ȵ��ַ�ʱ��p2��ʼ�ƶ�����һ�����ж��ַ��Ƿ���ȣ�ֱ��s1�ַ���������
//��p1��ָ��s1����ʼλ�ã���p2һ���ƶ�����һ�����ж��ַ��Ƿ���ȣ�ֱ��s2�ַ���������
//��ʱ�ж���ϣ�p2ָ��s2���ַ�������λ�ã�ʹ����ֵ��1.

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
//		printf("s1��s2��ת�õ���\n");
//	}
//	else
//	{
//		printf("s1����s2��ת�õ���\n");
//	}
//	return 0;
//}

//3.дһƪ���ͣ�̸̸�����ĵ��ù��̣�ջ֡�Ĵ��������١� 
//�������������ݲ�����Ⱥ�

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
