#define _CRT_SECURE_NO_WARNINGS 1

/*
* @Author: hello_chen
* @Description: 
* @Versions：1.0
*/

/*
* 转义字符：在字符前加上 \ 使其具有特殊的意义.一个转义字符占一个字符的位置
* 
* 三字母词：以两个问号开头的后面再加上其他的字符 ?? + *(*为通配符) ，这类型在早期的编译器会重新组合成一个新的字符。早期为了可以输出 ??* 在问号前加上 \??* 这样就可以防止被解析成三字母词。现在的编译器已经防止了该类情况
* 
* 
*/

#include<stdio.h>

int Escaped_Characters();

int Escaped_Characters()
{
	//换行
	printf("\n");

	//表示 ' 字符
	printf("\'");

	//警告字符，蜂鸣
	printf("\a");

	//退格,向后退一格再输出
	printf("ad \b d");

	//水平制表符
	printf("a\tb");

	//转义八进制数字
	printf("\32\n");//将32作为八进制数转成十进制数再到ASCII码表找到对应的字符再转义

	//转义十六进制数字
	printf("\x12");//将12作为十六进制数转成十进制数再到ASCII码表找到对应的字符再转义

	return 0;
}