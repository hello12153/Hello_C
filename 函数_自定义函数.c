#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
* ret_type fun_name(para1, * )
*{
*	statement;//�����
*}
*ret_type ��������
*fun_name ������
*para1 ��������
*/

//�������ֵ
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

//������������������
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
} 