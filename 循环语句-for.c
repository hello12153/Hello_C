#define _CRT_SECURE_NO_WARNINGS 1
/*
* forѭ����������������ɣ������ʼ������ѭ���������仯����
* 
* 1.forѭ����ʼʱ������ִ�ж����ʼ����������������ѭ��������ִֻ��һ�ζ����ʼ������
* 2.�����ж�ѭ�����������������������ִ��һ��ѭ�����е����顣
* 3.����ִ����󣬽�������仯����
* 4.�ظ�2��3��ֱ�������������Ž���forѭ����
* ��forѭ����Ҳ���Գ���break��continue����for�е�continueֻ����ѭ�������Ĵ��룬�����������������������
* 
* ���Զ�������ʼ�����������ж���仯����
* 
* 
*/
#include<stdio.h>

void Circulation_For();
void test01_for();
void test02_for();

void Circulation_For() 
{
	int i;

	for ( i = 0; i != EOF; i = getchar())
	{
		putchar(i);
		//printf("%d\n", i);
	}
}

void test01_for() 
{
	for (int i = 0; i <= 10; i++)
	{
		i += 1;
		if (i == 5)
			continue;
		if (i == 11)
			break;
		printf("%d\n", i);
	}
}

void test02_for()
{
	int i = 0;
	int k = 0;
	for (i = 1, k = 0; i = 1; i++,k++)
	{
		if(k == 10)
		{
			break;
		}
		printf("I = %d,K = %d", i, k);
	}
	printf("I = %d,K = %d", i, k);
}