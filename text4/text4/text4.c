#define  _CRT_SECURE_NO_WARNINGS 1
//
//1.����Ļ��������Σ�13��13�У�
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	printf("���������ε�����ֵ��\n");
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
//2.���0��999֮������С�ˮ�ɻ������������
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
//	printf("\n����%d��ˮ�ɻ���\n",count);
//	return 0;
//}
//
//3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222
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
//	printf("������a��ֵ��\n");
//	scanf("%d",&a);
//	printf("������ǰn���n��ֵ��\n");
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
//	printf("ǰ5��֮��Ϊ��%d\n",sum);
//	return 0;
//}
//
//4.��дһ���������ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ��֡�
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
//		printf("�������ǳɶԳ��ֵ�\n");
//	}
//	else
//	{
//		printf("�����Ų��ǳɶԳ��ֵ�\n");
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	char input[20]={0};
	char c;
	printf("���������룺\n");
	scanf("%s",input);
	printf("��ȷ�����루Y/N����\n");
	c=getchar();
	if(c=='Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	if(c=='N')
	{
		printf("����ȷ��\n");
	}

}