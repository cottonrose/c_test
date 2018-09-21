#define  _CRT_SECURE_NO_WARNINGS 1
//
//1.在屏幕上输出菱形（13行13列）
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	printf("请输入菱形的行列值：\n");
//	scanf("%d",&n);
//	for(i=1;i<=n/2+1;i++)
//	{
//		for(k=1;k<=n/2-i+1;k++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=2*i-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=n/2;i>=1;i--)
//	{
//		for(k=n/2-i+1;k>=1;k--)
//		{
//			printf(" ");
//		}
//		for(j=2*i-1;j>=1;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//2.求出0～999之间的所有“水仙花数”并输出。
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	double sum = 0;
//	for(i=0;i<1000;i++)
//	{
//		double a = i % 10;
//		double b = (i/10) % 10;
//		double c = i/100;
//		sum = pow(a,3)+pow(b,3)+pow(c,3);
//		if(i == sum)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n共有%d个水仙花数\n",count);
//	return 0;
//}
//
//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222
//#include<stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	int j = 0;
//	int k = 0;
//	printf("请输入a的值：\n");
//	scanf("%d",&a);
//	printf("请输入前n项和n的值：\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		k = a;
//		for(j=0;j<i;j++)
//		{
//			k = k*10+a;
//		}
//		sum += k;
//	}
//	printf("前5项之和为：%d\n",sum);
//	return 0;
//}
//
//4.编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int count = 0;
//	char c;
//	while((c=getchar()) != EOF)
//	{
//		if(c=='{')
//		{
//			count++;
//		}
//		if(c=='}')
//		{
//			count--;
//		}
//	}
//	if(count==0)
//	{
//		printf("花括号是成对出现的\n");
//	}
//	else
//	{
//		printf("花括号不是成对出现的\n");
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	char input[20]={0};
	char c;
	printf("请输入密码：\n");
	scanf("%s",input);
	printf("请确认密码（Y/N）：\n");
	c=getchar();
	if(c=='Y')
	{
		printf("确认成功\n");
	}
	if(c=='N')
	{
		printf("放弃确认\n");
	}

}