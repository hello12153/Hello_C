#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions��1.0
*/

/*
* ���̿������
* ˳��ṹ��������ִ��main������ʱ���� ��һ�� ��ʼ����ִ�У�ֱ����������ȫ��ִ����ɡ��ڴ˹����г�������д��˳�򣬲��������κ�һ�д��롣��������ִ�����̾��ǳ����� ˳��ִ�нṹ
* ѭ���ṹ���ظ���һ��������ֱ������ﵽ����ֵ
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
		printf("%d ��", line);
	}

	return 0;
}