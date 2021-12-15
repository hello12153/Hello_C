#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions：1.0
*/

/*
* 流程控制语句
* 顺序结构：当程序执行main方法的时候会从 第一行 开始往下执行，直到整个代码全部执行完成。在此过程中程序按照书写的顺序，不会跳过任何一行代码。像这样的执行流程就是常见的 顺序执行结构
* 循环结构：重复做一个动作，直到结果达到理想值
* 
*/

#include<stdio.h>
#include<string.h>

int Process_Control();

int Process_Control()
{
	int line = 0;
	while (line <= 20000)
	{
		printf("%d\n",line);
		line++;
	}

	if (line == 20000)
	{
		printf("%d 了", line);
	}

	return 0;
}