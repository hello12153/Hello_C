#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void strcpy_demo();

/*
* char * strcpy ( char * destination, const char * source )：用于拷贝字符串，将 source 指向的 C 字符串复制到 destination 指向的数组中，包括终止空字符（并在该点停止）。source不必指向字符数组的开始，也可以从字符数组某个元素开始
*															strcpy是将destination中的前面长度的字符串替换成source的，超出source长度的其余字符串会保留下来，但在读取中会先遇到\0，所以后面的字符不会被读取
*															需要注意内存溢出，destination的长度必须与source一致
*	例：
*		char str1[] = "helloword!!";
*		char str2[40] = "###############";
*		strcpy(str2,str1);
*		此时的str2的内容：helloword!!\0###，在输出str2时，当读取到\0后面的字符不会再读取。
*/

void strcpy_demo() 
{
	char str1[] = "sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("str1:%s\nstr2:%s\nstr3:%s\n", str1, str2, str3);
}

/*
* void * memset ( void * ptr, int value, size_t num )：填充内存块，将 ptr 指向的内存块的前 num 个字节设置为指定值 value（解释为无符号字符）。
*	例：
*		char str[] = "almost every programmer should know memset!";
*		memset(str,"*",4);
*		此时的str的内容：****st every programmer should know memset!
*/
void memset_demo() 
{
	char str[] = "hello word!!";
	memset(str, "*", 5);
	printf("%s", str);
	
}