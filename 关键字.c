#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions：1.0
*/

/*
* c语言中有一些具有特殊含义的单词，这种单词叫关键字
* 
* typedef：用于为类型重命名，也称别名
*	例：为int类型重命名uint
*		typedef int uint;
*		//num1和num2类型是一样的
*		int num1 = 10;
*		uint num2 = 10;
* 
* extern：声明外部符号，用于声明外部变量/函数
*	例1
*		Add.c
*			add.c的全局变量
*			int g_val =1980;
*		test.c
*			使用add.c的全局变量要先声明
*			extern int g_val;
*			a = g_val + 10;
*	例2
*		Add.c
*			add.c的函数
*			int add(int a， int b)
*		test.c
*			要调用add.c的add函数，要先声明
*			extern int add(int, int);
* 
* static：用于修饰变量和函数。局部变量被static修饰，改变其生命周期。全局变量/函数 被static修饰，改变其作用域/链接属性，使得这个其只能在本源文件内使用，不能在其他源文件内使用
*	例：
*		static int a = 1;
*	
* #define：用于定义常量和宏
*	例
*		定义标识符常量
*		#define NUM 100;
*		定义宏，比较x与y大小
*		#define MAX(x, y) (x>y ? x : y)
*		
*		int a = 10;
*		int b = 20;
*		int num = MAX(a,b);
*
* 指针：数型* 此处的*是代表指针类型，指针类型存储的是内存地址。*指针变量 此处的*是解引用操作符，用于找到指针存放的地址，可用于修改这个內存地址中存储的数据
*		指针大小在32位平台是4个字节，64位平台是8个字节。
*	例
*		int a = 20;
*		把a的内存地址存储到指针变量p中
*		int* p = &a;
*		对指针p进行解引用，指到对应的地址，把值改为30
*		*p = 30;
* 
* 
* struct：结构体，用于描述复杂类型，可以在一个块中定义不同类型的属性
*	例
*		//描述结构体
*		struct Stu
*		{
*			char name[20];//名字
*			int age; //年龄
*			char sex[5]; //性别
*			char id[15]； //学号
*		};
*		定义结构体
*		struct Stu student = {"张三", 20, "男", "20180101"};
*		.为结构成员访问操作符
*		printf("name = %s age = %d sex = %s id = %s\n", student.name, student.age, student.sex, student.id)
*		->操作符
*		struct Stu *ps = &student
*		printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id)
* 
* strtyp：字符串拷贝，是string.h的库函数，用于更改结构体中字符数组的数据
*	例：
*		第一个参数是被修改的变量，第二个参数是要替换的数据
*		strtyp(student.name, "C++牛B！！");
*/

#include<stdio.h>
#include<string.h>


void test();
int Keyword();

typedef unsigned int u_int;

//stat_num变量在本工程其他源文件中无法使用，static修饰的全局变量改变了其作用域
static int stat_num = 10;

//描述结构体
struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[15];
};

void test()
{
	//加了static修饰的a生命周期直到该程序结束才死掉，函数虽然结束调用，但a还存在内存中，并存储着最后一次赋的值
	static int a = 1;
	a++;
	printf("%d", a);
}

int Keyword()
{
	//定义结构体
	struct Stu student = { "张三", 20, "男", "20180101" };

	//typedef
	//num1和num2类型是一样的
	unsigned int num1 = 10;
	u_int num2 = 10;

	//static
	/*int i = 0;
	while (i<5)
	{
		test();
		i++;
	}*/


	//指针
	int a = 10;
	//int * 中的 * 指明p是指针类型，因为a的类型是int，指针p存储的是a的地址，所以p的类型是int *
	int * p = &a;

	//此处的*是解引用操作符
	//*p是找到指针p存放的地址，*p等同以a，*p=20 == a=20 
	* p = 20;

	//%p是打印内存地址格式
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", sizeof(p));

	//struct
	//.操作符
	printf("name = %s age = %d sex = %s id = %s\n", student.name, student.age, student.sex, student.id);
	// ->操作符
	struct Stu * ps = &student;
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
	

	return 0;
}

