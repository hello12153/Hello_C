#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "Function_Recursion.h"

/*
* 1.��л��λ�쵼�����и�л��λ�쵼�Ļ��ᣬ��ǰ��û�����ҿ������Ŷ���ѧ���Ŷ���������֪ʶ��
* �ص����⣬��Ȼ����ѧ��һ�죬������������һ���ˡ��µ�ϵͳ�����𾪵��Ǻ�����������֮ͬ����Ҳ�в�֮ͬ����
* ��ͬ���в�ͬ�Ĵ�����򣬽���Ҳ����ͬ����ͬ����ĳЩ�ط�Ҳ��ͬ��Ҫ��绰�ĸ澯����Ҫ��绰��
* �����ջ������ջ��˽�����ջ���֮���µ�֪ʶ��������֮ǰ���һ�һֱ��ס�ġ�
* �����ѧϰ�Գ�����ʦ��һ�仰�ܽ�ɣ������Խ����ϲ������ɽ������;߱���Խ��ϲ������ɽ��������
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