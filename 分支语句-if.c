#define _CRT_SECURE_NO_WARNINGS 1
/*
* 
*if语句:用于单分支选择结构
*exp为表达式，表达式的结果必须是true(0)或false(1)；
*1. 如果exp为true，执行语句1
*2. exp为false，执行else后面的语句n，多个else if(exp)以此类推
*3. 如果要执行多条语句必须使用代码块`{}`
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

//练习
//1. 判断一个数是否为奇数
void test01_if()
{
	int num;
	scanf("%d", &num);

	if (num % 2 != 0)
	{
		printf("%d为奇数！！", num);
	}
	else
	{
		printf("%d为偶数！！", num);
	}
}

//2. 输出1-100之间的奇数
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