#define _CRT_SECURE_NO_WARNINGS 1

/*
* @Author: hello_chen
* @Description: 
* @Versions：1.0
*/

/**
* 常量：不可以直接改变的变量，和变量的定义的形式有所差异
* 
* 常见的常量类形：字面常量
*				 const 修饰的常变量，但其本质还是变量
*				 #define 定义的标识符常量
* 				 枚举常量
* 枚举：有默认值
* 
*/
#include<stdio.h>

//用define定义的常量
#define MIX 1

int Constants();

//枚举举例
enum snum
{
	max = 0,
	sele = 1,
	blue = 'a'
};

int Constants()
{
	//字面变量
	//300
	//3.14

	//在变量定义的前面加上修饰const可以定义常变量，但其本质还是变量
	int num_0 = 1;
	const int num_1 = 4;
	//使用枚举
	enum snum num_2 = blue;
	

	//此num因为加了const修饰，无法再次赋值
	//num = 8;

	//定义数组
	int arr_0[10] = { 0 };
	//因为定义数组时的数组成员个数必须是常量值，修饰const的常变量虽然是常量，但其本质还是变量
	//int arr_1[num_0] = { 0 };
	//int arr_2[num_1] = { 0 };
	// #define定义的标识符常量可以
	int arr_2[MIX] = { 0 };
	//枚举常量不可以
	//int arr_3[num_2] = { 0 };

	printf("%d", num_2);

	return 0;
}