

//1.模拟实现strncpy 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncpy(char *dest, const char *src,int num)
//{
//	char *ret = dest;
//	assert(dest && src);
//	while(num)
//	{
//		*dest++ = *src++;
//		num--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello,bit!";
//	char arr2[] = "world!";
//	my_strncpy(arr1,arr2,5);
//	printf("%s\n",arr1);
//}

//2.模拟实现strncat 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char *my_strncat(char *dest, const char *src, int num)
//{
//	char *ret = dest;
//	assert(dest && src);
//	while(*dest++ != '\0')
//		;
//	dest--;
//	while(num)
//	{
//		*dest++ = *src++;
//		num--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world,bit";
//	my_strncat(arr1,arr2,5);
//	printf("%s\n",arr1);
//}

//3.模拟实现strncmp 

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strncmp(const char *s1, const char *s2, size_t num)
//{
//	int ret = 0;
//	while(num-- && !(ret=*(unsigned char *)s1-*(unsigned char *)s2))
//	{
//		++s1;
//		++s2;
//	}
//	if(ret<0)
//		return -1;
//	else if(ret>0)
//		return 1;
//	return (ret);
//}
//
//int main()
//{
//	char arr1[] = "abcbef";
//	char arr2[] = "abcccc";
//	int ret = my_strncmp(arr1,arr2,3);
//	printf("%d\n",ret);
//
//}

//大小端问题
//#include <stdio.h>
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//
//int main()
//{
//	int ret = 0;
//	ret = check_sys();
//	if(ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//将long类型的IP地址，转换为点分十进制的表示形式
//#include <stdio.h>
//
//union ip_addr
//{
//	unsigned long addr;
//	struct 
//	{
//		unsigned char c1;
//		unsigned char c2;
//		unsigned char c3;
//		unsigned char c4;
//	}ip;
//};
//
//int main()
//{
//	union ip_addr my_ip;
//	my_ip.addr = 19216801;
//	printf("%d.%d.%d.%d\n",my_ip.ip.c1,my_ip.ip.c2,my_ip.ip.c3,my_ip.ip.c4);
//	return 0;
//}