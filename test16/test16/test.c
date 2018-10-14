

//1.递归和非递归分别实现求第n个斐波那契数。 
// 1 1 2 3 5 8 13 21 34
//#include <stdio.h>
//
//
////递归实现
////int Fibonacci(int n)
////{
////	if(n<=2)
////		return 1;
////	else
////		return Fibonacci(n-2)+Fibonacci(n-1);
////
////}
//
////非递归实现
//int Fibonacci(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if(n<=2)
//		return 1;
//	else
//	{
//		for(i=3; i<=n; i++)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 8;
//	int fibo = Fibonacci(n);
//	printf("%d\n",fibo);
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现 
//
//#include <stdio.h>
//
//int Pow(int n, int k)
//{
//	if(k == 0)
//		return 1;
//	else
//		return n*Pow(n,k-1);
//
//}
//
//int main()
//{
//	int n = 3;
//	int k = 3;
//	int ret = Pow(n,k);
//	printf("%d\n",ret);
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
//
//#include <stdio.h>
//
//int DigitSum(int n)
//{
//	static int sum = 0;
//	if(n>9)
//	{
//		return sum = sum + (n%10) + DigitSum(n/10);
//	}
//	else
//		return n%10;
//}
//
//int main()
//{
//	unsigned int n = 1729;
//	int sum = DigitSum(n);
//	printf("%d\n",sum);
//	return 0;
//}

//4. 编写一个函数reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中 
//的字符串操作函数。 
//
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str);
//	while(*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char *str,char *end)
//{
//	char tmp = *str;
//	*str = *end;
//	*end = tmp;
//	assert(str);
//	if(str<end)
//	{
//		reverse_string(str+1,end-1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = my_strlen(arr);
//	reverse_string(arr,arr+sz-1);
//	printf("%s\n",arr);
//	return 0;
//}

//5.递归和非递归分别实现strlen 

#include <stdio.h>
#include <assert.h>
//
////递归实现
//int my_strlen(const char *str)
//{
//	static int count = 0;
//	assert(str);
//	while(*str != '\0')
//	{
//		my_strlen(str+1);
//		count++;
//		return count;
//	}
//	return 1;
//}
//
////非递归实现
////int my_strlen(const char *str)
////{
////	int count = 0;
////	assert(str);
////	while(*str++ != '\0')
////	{
////		count++;
////	}
////	return count;
////}
//
//3、指针-指针
//int my_strlen(const char *str)
//{
//	char *ret = (char *)str;
//	assert(str);
//	while(*str++)
//		;
//	str--;
//	return (unsigned char *)str-(unsigned char *)ret;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = my_strlen(arr);
//	printf("%d\n",sz);
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘 

//#include <stdio.h>
//
////递归
//int Fac(int n)
//{
//	static int sum = 1;
//	while(n>1)
//	{
//		return sum = n * Fac(n-1);
//	}
//	if(n == 1)
//		return 1;
//}
//
////非递归
////int Fac(int n)
////{
////	int i = 0;
////	int sum = 1;
////	for(i=1; i<=n; i++)
////	{
////		sum *= i;
////	}
////	return sum;
////}
//
//int main()
//{
//	int n = 5;
//	int ret = Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//7.递归方式实现打印一个整数的每一位 

//#include <stdio.h>
//
//void Print(int n)
//{
//	if(n>9)
//	{
//		Print(n/10);
//		printf("%d ",n%10);
//	}
//	else
//		printf("%d ",n%10);
//}
//
//int main()
//{
//	int n = 1729;
//	Print(n);
//	return 0;
//}