#define _CRT_SECURE_NO_WARNINGS 1


//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ� 
//�ҳ����������֣����ʵ�֡� 
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,3,5,7};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sz; i++)
//	{
//		for(j=i+1; j<sz; j++)
//		{
//			if((arr[i]^arr[j]) == 0)
//			{
//				arr[j] = 0;
//				break;
//			}
//		}
//		if(j == sz && arr[i] != 0)
//		{
//			printf("%dֻ������һ��\n",arr[i]);
//		}
//	}
//	return 0;
//}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡� 
//

// 1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1  1
//   1     1     1     1     1     1     1     1     1     1
//       1           1          1            1          1
//              1                       1
//                         1
#include <stdio.h>

int main()
{
	int money = 20;
	int price = 1;
	int count = money/price;
	int empty = money/price;
	int ret = 0;
	while(empty != 1)
	{
		if(empty%2 == 0)
		{
			count += empty/2;
			empty = empty/2-empty%2;
		}
		else
		{
			count += empty/2;
			empty = empty/2+empty%2;

		}
	}
	printf("���Ժ�%dƿ��ˮ\n",count);

	return 0;
}

//3.ģ��ʵ��strcpy 

//#include <stdio.h>
//#include <assert.h>
//
//char *my_strcpy(char *dest, const char *scr)
//{
//	char *ret = dest;
//	assert(dest && scr);
//	while(*dest++=*scr++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[] = "efghi";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}

//4.ģ��ʵ��strcat 

//#include <stdio.h>
//#include <assert.h>
//
//char *my_strcat(char *dest, const char *scr)
//{
//	char *ret = dest;
//	assert(dest && scr);
//	while(*dest)
//	{
//		dest++;
//	}
//	while(*dest++=*scr++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[] = "efg";
//	printf("%s\n",my_strcat(arr1,arr2));
//	return 0;
//}