

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
// 1 1 2 3 5 8 13 21 34
//#include <stdio.h>
//
//
////�ݹ�ʵ��
////int Fibonacci(int n)
////{
////	if(n<=2)
////		return 1;
////	else
////		return Fibonacci(n-2)+Fibonacci(n-1);
////
////}
//
////�ǵݹ�ʵ��
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

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
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
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 
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

//4. ��дһ������reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С� 
//Ҫ�󣺲���ʹ��C�������� 
//���ַ������������� 
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

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen 

#include <stdio.h>
#include <assert.h>
//
////�ݹ�ʵ��
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
////�ǵݹ�ʵ��
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
//3��ָ��-ָ��
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 

//#include <stdio.h>
//
////�ݹ�
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
////�ǵݹ�
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

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

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