#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions��1.0
*/

/*
* ���Ը��ݳ�����߼�������ķֹ��Ѵ��뻮�ֵ���ͬ���Զ��庯���У�main()������ҵ���߼��ʹ������̣���Ҫִ�о��������ʱ�򣬵�����Щ�Զ���ĺ����Ϳ�����
* ���������֣�һ�ֿ⺯����C��׼���ṩ�ģ�һ�����Զ��庯�����Լ������
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