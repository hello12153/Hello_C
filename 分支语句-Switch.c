#define _CRT_SECURE_NO_WARNINGS 1
/*
*
*switch语句:多分支选择结构
*exp为整形表达式；case为选择项，case后面的必须是整形常量表达式；break用于结束选择，或跳出循环；如果表达的值与所有的case标签的值都不匹配则执行default后面的语句
*1. 通过exp的值来选择执行哪个case
*2. 执行完case后通过break跳出switch
*3. 如果所有的case都与之不匹配则执行default
*4. 如果case中没有break则继续向下执行case，直到遇到break，这种现象叫case穿透
* 
* 注：在switch中，exp必须是整形表达式；case后面的必须是整形常量表达式
*/
#include<stdio.h>
void Branches_Switch();
void Penetration_Case();

void Test_Switch();

void Branches_Switch()
{
	int num;
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("周一了！！");
		break;
	case 2:
		printf("周二了！！");
		break;
	case 3:
		printf("周三了！！");
		break;
	case 4:
		printf("周四了！！");
		break;
	case 5:
		printf("周五了！！");
		break;
	case 6:
		printf("周六了！！");
		break;
	case 7:
		printf("周日了！！");
		break;
	default:
		printf("？？？周八");
		break;
	}
}

//case穿透
void Penetration_Case() 
{
	int num;
	scanf("%d", &num);

	switch (num)
	{
	case 1:

	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("要上班了！！");
		break;
	case 6:
		
	case 7:
		printf("休息了！！");
		break;
	default:
		printf("？？？");
		break;
	}
}

//练习
void Test_Switch()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++; 
			break;
		default:
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
}