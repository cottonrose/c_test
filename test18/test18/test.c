

//1.ʹ��main�����Ĳ�����ʵ��һ��������������������Խ���������������һ��������-a��ѡ��ִ�мӷ�����-s��ѡ��ִ�м�������-m��ѡ��ִ�г˷�����-d��ѡ��ִ�г�����������������Ϊ�������� 
//
//���磺�����в������룺test.exe -a 1 2 
//ִ��1+2���3 
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
//	int ret = 0; //����������
//	if(argc != 4)
//	{
//		printf("��������\n");  //���������������4��������Ĳ�������
//	}
//
//	switch(*(argv[1]+1)) //ȡ�ڶ��������ĵڶ����ַ�
//	{
//	case 'a': //�жϼӷ�
//		ret = Add(atoi(argv[2]),atoi(argv[3]));
//		break;
//	case 's': //�жϼ���
//		ret = Sub(atoi(argv[2]),atoi(argv[3]));
//		break;
//	case 'm': //�жϳ˷�
//		ret = Mul(atoi(argv[2]),atoi(argv[3]));		
//		break;
//	case 'd': //�жϳ���
//		ret = Div(atoi(argv[2]),atoi(argv[3]));
//		break;
//	default:
//		printf("��������%s",argv[1]);
//		break; 
//	}
//	printf("ret = %d",ret);
//	return 0;
//}
//2.дð����������������ַ�����
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