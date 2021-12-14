/*
* @Author: hello_chen
* @Description: Study Main Functions
* @Versions：1.0
*/

/*

#include <stdio.h>：这是预处理指令，告诉编译器把stdio.h中的内容包含在本程序中。

int main(void)：函数，C程序的基本模块。int表示这个函数要返回哪种类型的数据；main()代表函数名，main函数是C程序的入口函数，所有的程序都是通过此函数开始执行；void表示没有参数

int num：这是个声明变量的语句。num代表变量名；int规定了这个变量值的类型。向电脑申请空间存放变量

num = 1：赋值表达式，意思是‘把值1赋给变量num’，在执行声明语句时，编译器会在计算机内存中给变量预留空间，在执行赋值时，把值存储在之前预留的位置上。因为是变量所以可以赋不同的值。

printf()：这是C程序的标准函数，是stdio.h中包含的内容，所以在本程序中没有定义该函数也可以使用

return 0：这是返回语句，是将函数执行结果返回给调用者。main()函数表明了有int类型的返回值，所以该函数最后一条语句必须是return语句，后面是待返回的值

转义序列：用于代表难于表示或无法输入的字符。如‘\n’，代表换行，每个转义序列都以反斜杠‘\’开始。

注释：可以让读者更容易读懂程序。

*/



#include<stdio.h>

//声明方法MainFunctions
int MainFunctions();

//构建方法MainFunctions
int MainFunctions()
{
	int num;
	num = 1;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n ", num);

	return 0;
}