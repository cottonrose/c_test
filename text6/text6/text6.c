#define _CRT_SECURE_NO_WARNINGS 1

////1.дһ���������ز����������� 1 �ĸ��� 
//���磺 15 0000 1111 4 �� 1 
//����ԭ�ͣ� 
//int count_one_bits(unsigned int value) 
//{ 
//// ���� 1��λ�� 
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
//	printf("���������֣�\n");
//	scanf("%d",&i);
//	n = count_one_bits(i);
//	printf("%d������Ķ�������1�ĸ���Ϊ��%d\n",i,n);
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a[16] = {0};
//	int b[16] = {0};
//	printf("������һ������\n");
//	scanf("%d",&n);
//	while(n)
//	{
//		a[i] = n & 1;
//		n = n>>1;
//		b[i] = n & 1;
//		n = n>>1;
//		i++;
//	}
//	printf("ż��λ��\n");
//	for(i=15;i>=0;i--)
//	{
//		printf("%d",a[i]);
//	}
//	printf("\n����λ��\n");
//	for(i=15;i>=0;i--)
//	{
//		printf("%d",b[i]);
//	}
//	return 0;
//}
//3.���һ��������ÿһλ��
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[16] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("������һ������\n");
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

//4.���ʵ�֣� ����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	printf("������m��n��ֵ��\n");
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
//	printf("�����Ʊ���У���%dλ��ͬ\n",count);
//	return 0;
//}