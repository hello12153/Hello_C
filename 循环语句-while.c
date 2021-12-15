#define _CRT_SECURE_NO_WARNINGS 1
/*
* while语句可以实现循环
* exp为表达式，表达式的结果必须是true(0)或false(1)；break结束循环体；continue跳出本次循环进入下一次循环
* 1. exp为true，执行循环语句，直到exp为false
* 2. exp为false，则跳过循环
* 3. 如果要执行多条语句必须使用代码块`{}` 
* 4. 使用continue要注意要把判断条件的自变量放在continue前以免出现死循环
* 
* getchar：从键盘获取字符
* putchar：打印字符
* 
* EOF：文件结束标志
* 
* 输入缓冲区：输入函数是从输入缓冲区中读取数据。在输入数据时，回车、空格和TAB键都会储存在缓冲区中。getchar能读取上述三个字符，scanf在缓冲区中遇到上述三个字符会终止读取
*/

#include<stdio.h>

void Circulation_While();
void Test_While();
void Test02_While();

void Circulation_While()
{
	int num = 1;

	while (num<20)
	{
		num += 2;
		if (num == 11) {
			continue;
		}
		if (num > 21 || num == 21 )
		{
			break;
		}
		printf("%d\n", num);
	}
	
}

void Test_While()
{
	int ch = 10;
	while (EOF != (ch = getchar()))
	{
		putchar(ch);
	}
}

void Test02_While()
{
	int ch;
	while ( EOF != (ch = getchar()) )
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}
}