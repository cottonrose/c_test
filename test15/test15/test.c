//
//2.使用可变参数，实现函数，求函数参数的平均值。
//#include <stdio.h>
//#include <stdarg.h>
//
//int Average(int n, ...)
//{
//	va_list arg;
//	int i = 0;
//	int sum = 0;
//	va_start(arg,n); 
//	//_va_start(arg, n) ((void)(arg = (char*)(&n) + ((sizeof(n) + 4 - 1) & ~(4 - 1))))
//	for(i=0; i<n; i++)
//	{
//		sum += va_arg(arg,int);
//	}
//	return sum/n;
//	va_end(arg);
//}
//
//int main()
//{
//	int avg1 = Average(3, 5,6,7);
//	int avg2 = Average(4, 4,5,6,7);
//	printf("avg1 = %d\n",avg1);
//	printf("avg2 = %d\n",avg2);
//
//}
//
//3.使用可变参数，实现函数，求函数参数的最大值。
//
//#include <stdio.h>
//#include <stdarg.h>
//
//int Max(int n, ...)
//{
//	va_list arg;
//	int i = 0;
//	va_start(arg, n);
//	int max = va_arg(arg, int);
//	for (i = 1; i < n; i++)
//	{
//		int ret = va_arg(arg,int);
//		if (ret > max)
//		{
//			max = ret;
//		}
//	}
//	return max;
//	va_end(arg);
//}
//
//int main()
//{
//	int max1 = Max(4, -9, -4, -10, -28);
//	int max2 = Max(5, 5, 7, 18, -23, -30);
//	printf("max1 = %d\n", max1);
//	printf("max2 = %d\n", max2);
//	return 0;
//}
//
//4.模拟实现printf函数，可完成下面的功能
//能完成下面函数的调用。 
//print("s ccc d.\n","hello",'b','i','t'，100); 
//函数原型： 
//print(char *format, ...) 
// 
#include <stdio.h>
#include <stdarg.h>

void show(int n)
{
	if (n > 9)
	{
		show(n / 10);
	}
	putchar(n%10 + '0');
}

void print(char *format, ...)
{
	va_list arg;
	va_start(arg, format);

	while (*format)
	{
		switch (*format)
		{
		case 's':
		{
			char *ret = va_arg(arg, char*);
			while (*ret)
			{
				putchar(*ret);
				ret++;
			}
			break;
		}
		case 'c':
		{
			char ret = va_arg(arg, char);
			putchar(ret);
			break;
		}
		case 'd':
		{
			int ret = va_arg(arg, int);
			show(ret);
			break;
		}
		default:
		{
			putchar(*format);
			break;
		}

		}
		format++;
	}

}

int main()
{
	print("s ccc d.\n","hello",'b','i','t',100); 
	return 0;
}