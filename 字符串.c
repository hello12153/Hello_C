#define _CRT_SECURE_NO_WARNINGS 1

/*
* @Author: hello_chen
* @Description: 
* @Versions：1.0
*/

/*
* 字符串：由字符组成的字符数组，或由双引号（Double Quote）引起来的一串字符称为字符串字面值，如："hello C"、"你好！"
* 
* %s：用以给字符串或字符数组占位
* 
* strlen(arr_name)：string length 是C语言提供用于计算字符串长度的函数
* 
* 注：字符串的结束标志是一个 \0 的转义字符 , 程序在计算字符串长度的时候读取到 \0 会结束读取，且 \0 不算作字符串内容,但 \0 在数组中占一个位置
*/
#include<stdio.h>
#include<string.h>

int Char_arr();

int Char_arr()
{

	char arr_0[] = "hello";
	char arr_1[6] = "hello";

	char arr_2[] = { 'h','e','l','l','o' };
	char arr_3[6] = { 'h','e','l','l','o' };

	for (int i = 0; i < strlen(arr_0); i++)
	{
		printf("%c", arr_0[i]);
	}
	printf("\n");

	printf("%s", arr_1);

	printf("\n");

	printf("%d\n", strlen(arr_0));
	printf("%d\n", strlen(arr_1));

	//因为定义数组时没有给定成员个数，当计算长度时数组会先计算已知的成员个数，再计算随机的成员个数，直到遇到\n停止计算
	printf("%d\n", strlen(arr_2));
	printf("%d\n", strlen(arr_3));
	
	return 0;
}