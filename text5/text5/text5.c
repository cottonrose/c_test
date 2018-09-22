#define _CRT_SECURE_NO_WARNINGS 1
//
//1.猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("######################\n");
	printf("####    1.play    ####\n");
	printf("####    0.exit    ####\n");
	printf("######################\n");
}

void game()
{
	int m=rand()%100+1;
	int input = 0;
	int i = 10;
	printf("请输入数字：\n");
	while(i)
	{
		scanf("%d",&input);
		if(input>m)
		{
			printf("猜大了\n");
		}
		else if(input<m)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对啦！\n");
			break;
		}
		i--;
		printf("还有%d次机会\n",i);
	}
	if(i==0)
	{
		printf("很抱歉，机会已用完\n");
		printf("结果数字为:%d\n",m);
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));  //srand函数返回类型为void，参数为unsigned int型；
	                                  //time函数返回类型为time_t型(即long型)，参数是一个指针
	while(1)
	{
		menu();
		printf("请选择：\n");
	    scanf("%d",&a);
		if(a==1)
		{
			game();
		}
		else if(a==0)
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("输入错误，请重输\n");
		}
	}
	return 0;
}
//
//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.（折半查找）
//#include <stdio.h>
//int binary_search(int arr[],int n,int r)
//{
//	int left = 0;
//	int right = r;
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(n<arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if(n>arr[mid])
//		{
//			left = mid +1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if(left>right)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int a[]={0,2,4,6,8,10,12,14,16,18};
//	int n = 0;
//	int ret = 0;
//	int r = 0;
//	r = sizeof(a)/sizeof(a[0])-1;
//	printf("请输入要查找的数字n：\n");
//	scanf("%d",&n);
//	ret = binary_search(a,n,r);
//	if(ret == -1)
//	{
//		printf("没有找到该数字！\n");
//	}
//	else
//	{
//		printf("该数字所在数组元素下标为：%d\n",ret);
//	}
//	return 0;
//}
//
//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”,密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[] = "helloworld!";
//	char s[20] = { 0 };
//	int count = 3;
//	while(count)
//	{
//		printf("请输入密码：\n");
//		scanf("%s",s);
//		if(strcmp(s1,s)==0)
//		{
//			printf("登陆成功！");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("输入错误，还有%d次机会，请重新输入：\n",count);
//		}
//	}
//
//	return 0;
//}
//
//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	char c;
//	printf("请输入字符串：\n");
//	while((c=getchar())!='\n')
//	{
//		if(c>='A' && c<='Z')
//		{
//			putchar(tolower(c));
//		}
//		if(c>='a' && c<='z')
//		{
//			putchar(toupper(c));
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//
//}

//5.输入密码取消关机
//(1)用循环实现
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	while(1)
//	{
//		system("shutdown -s -t 60");
//		printf("电脑将在一分钟后关机，请输入“我是猪”取消关机\n");
//		scanf("%s",input);
//		if(strcmp(input,"我是猪")==0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//(2)用goto语句实现
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在一分钟后关机，请输入“我是猪”取消关机\n");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//6.编写代码，演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char a1[]="FuRongZuiKeAi!";
//	char a2[]="**************";
//	int sz = sizeof(a1)/sizeof(a1[0]);
//	int left = 0;
//	int right = sz-2;
//	while(left<=right)
//	{
//		Sleep(1000); 
//		a2[left] = a1[left];
//		a2[right] = a1[right];
//		printf("%s\n",a2);
//		left++;
//		right--;
//		system("cls"); //清屏
//
//	}
//	return 0;
//
//}