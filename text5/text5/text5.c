#define _CRT_SECURE_NO_WARNINGS 1
//
//1.��������Ϸ
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
	printf("���������֣�\n");
	while(i)
	{
		scanf("%d",&input);
		if(input>m)
		{
			printf("�´���\n");
		}
		else if(input<m)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶�����\n");
			break;
		}
		i--;
		printf("����%d�λ���\n",i);
	}
	if(i==0)
	{
		printf("�ܱ�Ǹ������������\n");
		printf("�������Ϊ:%d\n",m);
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));  //srand������������Ϊvoid������Ϊunsigned int�ͣ�
	                                  //time������������Ϊtime_t��(��long��)��������һ��ָ��
	while(1)
	{
		menu();
		printf("��ѡ��\n");
	    scanf("%d",&a);
		if(a==1)
		{
			game();
		}
		else if(a==0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
			printf("�������������\n");
		}
	}
	return 0;
}
//
//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
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
//	printf("������Ҫ���ҵ�����n��\n");
//	scanf("%d",&n);
//	ret = binary_search(a,n,r);
//	if(ret == -1)
//	{
//		printf("û���ҵ������֣�\n");
//	}
//	else
//	{
//		printf("��������������Ԫ���±�Ϊ��%d\n",ret);
//	}
//	return 0;
//}
//
//3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���,������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
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
//		printf("���������룺\n");
//		scanf("%s",s);
//		if(strcmp(s1,s)==0)
//		{
//			printf("��½�ɹ���");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("������󣬻���%d�λ��ᣬ���������룺\n",count);
//		}
//	}
//
//	return 0;
//}
//
//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	char c;
//	printf("�������ַ�����\n");
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

//5.��������ȡ���ػ�
//(1)��ѭ��ʵ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	while(1)
//	{
//		system("shutdown -s -t 60");
//		printf("���Խ���һ���Ӻ�ػ��������롰������ȡ���ػ�\n");
//		scanf("%s",input);
//		if(strcmp(input,"������")==0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//(2)��goto���ʵ��
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���һ���Ӻ�ػ��������롰������ȡ���ػ�\n");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//6.��д���룬��ʾ����ַ��������ƶ������м���
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
//		system("cls"); //����
//
//	}
//	return 0;
//
//}