#define _CRT_SECURE_NO_WARNINGS 1
/*
* do...while��ѭ����ִ��һ��ѭ�����ٽ����ж�
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