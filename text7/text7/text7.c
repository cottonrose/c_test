//#define _CRT_SECURE_NO_WARNINGS 1
//
//1. ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� ����9�����9*9�ھ������12�����12*12�ĳ˷��ھ��� 
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	printf("������˷��ھ������������\n");
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			printf("%2d*%2d=%3d   ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//2. ʹ�ú���ʵ���������Ľ����� 
//
//#include <stdio.h>
//
//void change(int *p,int *q)
//{
//	int temp;
//	temp =*p;
//	*p = *q;
//	*q = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ��\n");
//	scanf("%d %d",&a,&b);
//	change(&a,&b);
//	printf("������a��b��ֵΪ��%d %d\n",a,b);
//	return 0;
//}
//3. ʵ��һ�������ж�year�ǲ������ꡣ 
//
//#include <stdio.h>
//
//int judge(int year)
//{
//	if(year%4==0 && year/100!=0)
//	{
//		return 1;
//	}
//	else if(year%100==0 && year%400==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	printf("������Ҫ�жϵ����:\n");
//	scanf("%d",&year);
//	ret = judge(year);
//	if(ret == 1)
//	{
//		printf("%d������\n",year);
//	}
//	else
//	{
//		printf("%d��������\n",year);
//	}
//}
//4. ����һ�����飬 ʵ�ֺ���init������ʼ�����顢 ʵ��empty����������顢 ʵ��reverse���������������Ԫ�ص����á� Ҫ���Լ���ƺ����Ĳ���������ֵ�� 
//
//#include <stdio.h>
//
//void init(int a[],int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//}
//
//void empty(int a[],int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
//	{
//		*(a+i) = 0;
//	}
//}
//
//void reverse(int a[],int n)
//{
//	int left = 0;
//	int right = n-1;
//	while(left<right)
//	{
//		int temp = a[left];
//		a[left] = a[right];
//		a[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void print(int a[],int n)
//{
//	int i = 0;
//	for(i=0; i<n; i++)
//	{
//		printf("%d ",a[i]);
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("�����������е�ֵ��\n");
//	init(arr,sz);
//	printf("���飺\n");
//	print(arr,sz);
//	printf("\n���������ú�Ϊ��\n");
//	reverse(arr,sz);
//	print(arr,sz);
//	printf("\n������飺\n");
//	empty(arr,sz);
//	print(arr,sz);
//	return 0;
//}
//
//5.ʵ��һ���������ж�һ�����ǲ���������
//
//#include <stdio.h>
//
//int judge(int a)
//{
//	int i = 1;
//	int j = a/2;
//	for(i=2; i<=j; i++)
//	{
//		if(a%i==0)
//		{
//			break;
//		}
//	}
//	if(i>j)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������Ҫ�жϵ�����\n");
//	scanf("%d",&n);
//	ret = judge(n);
//	if(ret == 1)
//	{
//		printf("%d��һ������\n",n);
//	}
//	else
//	{
//		printf("%d����һ������\n",n);
//	}
//	return 0;
//}