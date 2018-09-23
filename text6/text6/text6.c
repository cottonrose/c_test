#define _CRT_SECURE_NO_WARNINGS 1

////1.写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1 
//程序原型： 
//int count_one_bits(unsigned int value) 
//{ 
//// 返回 1的位数 
//} 

//#include <stdio.h>
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	
//	while(value)
//	{
//			if(value & 1)
//			{
//				count++;
//			}
//			value = value>>1;
//	}
//	return count;
//}
//
//int main()
//{
//	int i;
//	int n = 0;
//	printf("请输入数字：\n");
//	scanf("%d",&i);
//	n = count_one_bits(i);
//	printf("%d这个数的二进制中1的个数为：%d\n",i,n);
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a[16] = {0};
//	int b[16] = {0};
//	printf("请输入一个数：\n");
//	scanf("%d",&n);
//	while(n)
//	{
//		a[i] = n & 1;
//		n = n>>1;
//		b[i] = n & 1;
//		n = n>>1;
//		i++;
//	}
//	printf("偶数位：\n");
//	for(i=15;i>=0;i--)
//	{
//		printf("%d",a[i]);
//	}
//	printf("\n奇数位：\n");
//	for(i=15;i>=0;i--)
//	{
//		printf("%d",b[i]);
//	}
//	return 0;
//}
//3.输出一个整数的每一位。
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[16] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("请输入一个数：\n");
//	scanf("%d",&n);
//	while(n)
//	{
//		arr[i] = n & 1;
//		n = n>>1;
//		i++;
//	}
//	for(i=sz-1; i>=0; i--)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}

//4.编程实现： 两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入m和n的值：\n");
//	scanf("%d %d",&m,&n);
//	while(m||n)
//	{
//		i = m & 1;
//		j = n & 1;
//		if(i != j)
//		{
//			count++;
//		}
//		n = n>>1;
//		m = m>>1;
//	}
//	printf("二进制表达中，有%d位不同\n",count);
//	return 0;
//}