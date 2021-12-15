#define _CRT_SECURE_NO_WARNINGS 1
/*
* do...while：循环先执行一次循环体再进行判断
*/
#include<stdio.h>

void Circulation_doWhile();

void Circulation_doWhile()
{
	int i = 0;
	do 
	{
		i++;
		if (5 == i)
		{
			break;
		}
		printf("i = %d\n", i);
	} while (i > 0);
}