#define _CRT_SECURE_NO_WARNINGS 1
/*
* 
*if���:���ڵ���֧ѡ��ṹ
*expΪ���ʽ�����ʽ�Ľ��������true(0)��false(1)��
*1. ���expΪtrue��ִ�����1
*2. expΪfalse��ִ��else��������n�����else if(exp)�Դ�����
*3. ���Ҫִ�ж���������ʹ�ô����`{}`
* 
*/
#include<stdio.h>

int iF_Else();

void test01_if();
void test02_if();

int iF_Else()
{
    int num = 1;
    int sum;
    scanf("%d", &sum);

    if (num + sum > 20)
        printf("sum = %d", sum);
    else if (num + sum > 15)
        printf("sum = %d", sum++);
    else if (num + sum > 10)
        printf("sum = %d", sum += 2);
    else
    {
        printf("sum = %d", sum);
        printf("num = %d", num);
    }
	return 0;
}

//��ϰ
//1. �ж�һ�����Ƿ�Ϊ����
void test01_if()
{
	int num;
	scanf("%d", &num);

	if (num % 2 != 0)
	{
		printf("%dΪ��������", num);
	}
	else
	{
		printf("%dΪż������", num);
	}
}

//2. ���1-100֮�������
void test02_if()
{
	int num = 100;
	while (0 < num)
	{
		if (0 != num % 2)
		{
			printf("%d ", num);
		}
		if (0 == ((num - 1) % 10))
		{
			printf("\n");
		}
		num--;
	}

}