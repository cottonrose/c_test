

//1.使用main函数的参数，实现一个整数计算器，程序可以接受三个参数，第一个参数“-a”选项执行加法，“-s”选项执行减法，“-m”选项执行乘法，“-d”选项执行除法，后面两个参数为操作数。 
//
//例如：命令行参数输入：test.exe -a 1 2 
//执行1+2输出3 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int main(int argc, char *argv[], char *envp[])
//{
//	int ret = 0; //用于输出结果
//	if(argc != 4)
//	{
//		printf("参数有误\n");  //如果参数个数不是4，则输入的参数有误
//	}
//
//	switch(*(argv[1]+1)) //取第二个参数的第二个字符
//	{
//	case 'a': //判断加法
//		ret = Add(atoi(argv[2]),atoi(argv[3]));
//		break;
//	case 's': //判断减法
//		ret = Sub(atoi(argv[2]),atoi(argv[3]));
//		break;
//	case 'm': //判断乘法
//		ret = Mul(atoi(argv[2]),atoi(argv[3]));		
//		break;
//	case 'd': //判断除法
//		ret = Div(atoi(argv[2]),atoi(argv[3]));
//		break;
//	default:
//		printf("参数有误：%s",argv[1]);
//		break; 
//	}
//	printf("ret = %d",ret);
//	return 0;
//}
//2.写冒泡排序可以排序多个字符串。
//
#include <stdio.h>
#include <string.h>
#include <assert.h>

void buttle_sort(char *arr[], int sz)
{
	int i = 0;
	int j = 0;
	assert(arr);
	for(i=0; i<sz-1; i++)
	{
		for(j=0; j<sz-1-i; j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				char *tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main()
{
	char *arr[] = {"hello","world","progream","computer"};
	int i = 0;
	buttle_sort(arr,4);
	for(i=0; i<4; i++)
	{
		printf("%s\n",arr[i]);
	}
	return 0;
}