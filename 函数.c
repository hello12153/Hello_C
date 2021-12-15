#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions：1.0
*/

/*
* 可以根据程序的逻辑和任务的分工把代码划分到不同的自定义函数中，main()更关心业务逻辑和处理流程，需要执行具体任务的时候，调用这些自定义的函数就可以了
* 函数分两种，一种库函数由C标准库提供的，一种是自定义函数由自己定义的
* 
*/

#include<stdio.h>

int Function();
int Add(int a, int b);

int Add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int Function()
{
	int a, b,sum;
	a = 5;
	b = 6;
	sum = Add(a, b);
	printf("%d + %d = %d", a, b, sum);
	return 0;
}