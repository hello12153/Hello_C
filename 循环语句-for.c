#define _CRT_SECURE_NO_WARNINGS 1
/*
* for循环：由三个部分组成：定义初始变量、循环条件、变化变量
* 
* 1.for循环开始时，会先执行定义初始变量，而且在整个循环过程中只执行一次定义初始变量。
* 2.接着判断循环条件，如果条件成立，就执行一次循环体中的语句块。
* 3.语句块执行完后，接下来会变化变量
* 4.重复2、3，直到条件不成立才结束for循环。
* 在for循环中也可以出现break和continue，在for中的continue只跳过循环体后面的代码，不会跳过调整变量这个步骤
* 
* 可以定义多个初始变量，可以有多个变化变量
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