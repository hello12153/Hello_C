#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
* ret_type fun_name(para1, * )
*{
*	statement;//语句项
*}
*ret_type 返回类型
*fun_name 函数名
*para1 函数参数
*/

//返回最大值
int get_max(int a,int b) 
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//交换两个变量的内容
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
} 