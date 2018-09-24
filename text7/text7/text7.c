//#define _CRT_SECURE_NO_WARNINGS 1
//
//1. 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。 
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	printf("请输入乘法口诀表的行列数：\n");
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
//2. 使用函数实现两个数的交换。 
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
//	printf("请输入a和b的值：\n");
//	scanf("%d %d",&a,&b);
//	change(&a,&b);
//	printf("交换后a和b的值为：%d %d\n",a,b);
//	return 0;
//}
//3. 实现一个函数判断year是不是润年。 
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
//	printf("请输入要判断的年份:\n");
//	scanf("%d",&year);
//	ret = judge(year);
//	if(ret == 1)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n",year);
//	}
//}
//4. 创建一个数组， 实现函数init（）初始化数组、 实现empty（）清空数组、 实现reverse（）函数完成数组元素的逆置。 要求：自己设计函数的参数，返回值。 
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
//	printf("请输入数组中的值：\n");
//	init(arr,sz);
//	printf("数组：\n");
//	print(arr,sz);
//	printf("\n将数组逆置后为：\n");
//	reverse(arr,sz);
//	print(arr,sz);
//	printf("\n清空数组：\n");
//	empty(arr,sz);
//	print(arr,sz);
//	return 0;
//}
//
//5.实现一个函数，判断一个数是不是素数。
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
//	printf("请输入要判断的数：\n");
//	scanf("%d",&n);
//	ret = judge(n);
//	if(ret == 1)
//	{
//		printf("%d是一个素数\n",n);
//	}
//	else
//	{
//		printf("%d不是一个素数\n",n);
//	}
//	return 0;
//}