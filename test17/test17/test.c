#define _CRT_SECURE_NO_WARNINGS 1


//1.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。 
//找出这两个数字，编程实现。 
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
//			printf("%d只出现了一次\n",arr[i]);
//		}
//	}
//	return 0;
//}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。 
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
	printf("可以喝%d瓶汽水\n",count);

	return 0;
}

//3.模拟实现strcpy 

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

//4.模拟实现strcat 

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