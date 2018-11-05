#define _crt_secure_no_warnings 1

//1.实现strcpy 

//#include <stdio.h>
//#include <string.h>
//#include<assert.h>
//
//char *my_strcpy(char *dest,const char *src)
//{
//	char *ret = dest;
//	assert(dest && src);
//	while(*dest++ = *src++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "abcdefg";
//	char str2[] = "world";
//	my_strcpy(str1,str2);
//	printf("%s\n",str1);
//	return 0;
//}
//2.实现strcat 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char *my_strcat(char *dest, char *src)
//{
//	char *ret = dest;
//	assert(dest && src);
//	while(*dest++ != '\0')
//		;
//	dest--;
//	while(*dest++ = *src++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[] = "world";
//	my_strcat(str1,str2);
//	printf("%s\n",str1);
//	return 0;
//}

//3.实现strstr 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char *my_strstr(const char *str1, const char *str2)
//{
//	char *cp = (char *)str1;
//	char *sub = (char *)str2;
//	char *s1 = null;
//	if(*str2 == '\0')
//		return s1;
//	while(*cp)
//	{
//		s1 = cp;
//		sub =(char *)str2;
//		while(*s1 && *sub && (*s1==*sub))
//		{
//			s1++;
//			sub++;
//		}
//		if(*sub=='\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return null;
//}
//
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "haha";
//	printf("%p\n",my_strstr(str1,str2));
//	return 0;
//}

//4.实现strchr 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char *my_strchr(const char *dest,int ch)
//{
//	char *ret = (char *)dest;
//	assert(dest);
//	while((int)(*ret)!=ch && ret)
//		ret++;
//	if(*ret=='\0')
//		return null;
//	return ret;
//}
//
//int main()
//{
//	char arr[]="abcdefg";
//	printf("%p\n",my_strchr(arr,'a'));
//	return 0;
//}

//5.实现strcmp 

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char *s1,const char *s2)
{
	int ret = 0;
	while(!(ret = (*(unsigned char*)s1-*(unsigned char*)s2)) && *s1)
	{
		++s1;
		++s2;
	}
	if(ret>0)
		return 1;
	else if(ret<0)
		return -1;

	return 0;

}

int main()
{
	char str1[] = "hello";
	char str2[] = "hello";
	printf("%d\n",my_strcmp(str1,str2));
	return 0;
}

//6.实现memcpy 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void *my_memcpy(void *dest, const void *src, size_t count)
//{
//	char *ret = (char *)dest;
//	assert(dest && src);
//	while(count--)
//	{
//		*(char *)dest = *(char *)src;
//		dest = (char *)dest+1;
//		src = (char *)src+1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[] = {5,6,7,8};
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	my_memcpy(arr1,arr2,16);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	return 0;
//}

//7.实现memmove

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void *my_memmove(void *dest, const void *src, size_t count)
//{
//	char *ret = (char *)dest;
//	assert(dest && src);
//	if(dest<src) //目标起始地址在源地址左边，从左到右交换
//	{
//		while(count--)
//		{
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest + 1;
//			src = (char *)src +1;
//		}
//	}
//	else
//	{
//		while(count--)
//			*((char *)dest+count) = *((char *)src+count);
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	my_memmove(arr+2,arr,16);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}