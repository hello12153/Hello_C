#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "Function_Recursion.h"

/*
* 1.感谢各位领导让我有感谢各位领导的机会，以前从没觉得我可以在团队里学到团队里其他的知识。
* 回到正题，虽然今天学了一天，但还是辛苦我一天了。新的系统让我震惊的是和深圳线有相同之处，也有不同之处。
* 不同是有不同的处理规则，界面也不相同，相同的是某些地方也相同，要打电话的告警还是要打电话。
* 今天收获让我收获到了今天的收获，总之，新的知识在我忘记之前，我会一直记住的。
* 今天的学习以初中老师的一句话总结吧，如果你越过了喜马拉雅山，那你就具备了越过喜马拉雅山的能力。
* 
* 2. 
*/

int my_strLens(const char* str)
{
	printf("%p\n", str);
	if ('\0' == *str)
	{
		return 0;
	}
	else
	{
		return 1 + my_strLens(str + 1);
	}
}


void my_test_Recursion() 
{
	char arr[10] = {'a','b','c', 'd', 'e', 'f', 'g'};
	int lenght = my_strLens(arr);
	printf("%d", lenght);
}

int my_factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * my_factorial(n - 1);
}