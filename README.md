
# 这是小陈的自学C语言的频道

## 那什么是C语言呢？
A：’面向过程的、抽象化的通用程序设计语言，广泛应用于底层的开发‘
## 面向对象？
A：面向过程，相对于其他语言，C是一个按部就班的编程语言，也就是按照分析出解决问题的步骤去一步一步去实现，在解决问题的过程中一个一个依次调用有先后之分，这就是面向过程
面向对象，把面向过程进行对象的封装

## 要从哪开始学习一门编程语言呢？
A：学习编程语言要从最经典的“HelloWorld！”开始


```c
/*
*	Author:Hello
*	Program_Name:HelloWolrd.c
*	Date:9/17/2012
*/

//头文件，用于对本程序将要用到的外介函数进行预编译
#include<stdio.h>

//main函数，一个程序的入口也是程序的起点
int main()
{
    //printf函数，外介函数，用于向屏幕输出文本
    printf("hello world!!");
    
    //return返回值，函数要向调用者返回什么样的数据
    return 0;
}
```


### C程序的结构：
一个C程序由头文件和函数组成
-  **#include**   这是一条预处理命令，是通知编译系统在对该程序进行编译前做一些预处理工作。
-  #include<**stdio.h**>  当预处理器发现#include指令后，会寻找后面<>中的文件，并把该文件的内容包含到当前程序中，也就是copy include头文件的内容到当前行，代替了#include指令。**stdio.h** 这是C标准的输入输出头文件
-  **函数**，也称为子程序、方法，是一段可以直接被另一段程序或代码引用的程序或代码
-  **注释**，用于表明语义，/* **段注释** */、// **行注释**

### 函数的概念 
- 每个C程序都有至少有一个函数，也就是主函数 **main()**
- 可以根据程序的**逻辑**和**任务**的分工把代码划分到不同的自定义函数中
- 函数也分为两种，一种是**库函数**，一种是自定义函数。库函数像：printf、scanf，在程序中可直接使用。
- **自定义函数**是为了完成某项任务而编写，目的是为了实现某项功能或让主函数main更简洁

### 如何自定义函数
自定义函数需要先向编译器**声明**函数的**名称**、函数的**返回值类型**、**参数列表**。做出声明后就可以定义函数的实现功能了，实现函数时要注意函数名称、返回值类型、参数列表要**与声明时一致**

```c
#include<stdio.h>

int max(int a, int b);

int main()
{
    int a = 1 , b = 2;
    int _max = max(a, b);
    printf("%d \n",_max);
    
    return 0;
}

int max(int a, int b)
{
    return a + b;
}
```
###### **注**：当函数的定义在调用这用这个函数之前时，可以不用声明这个函数 

```c
#include<stdio.h>

int max(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 1 , b = 2;
    int _max = max(a, b);
    printf("%d \n",_max);
    
    return 0;
}

```



### 数据类型

在日常的工作中，我们需要向程序传输许多数据，这些数据在程序中需要定义声明才能为我们所用。定义声明是为了让计算机合理的运用存储空间储存数据，因为每种数据在计算机中占用的位置都各不相同。

- 整型：int 、stort 、long 、long long
- 浮点型：float 、double
- 字符型：char

```c
int DataType() 
{
	int num = 20;
    char byte_c = 'a' ;
    float num_f = 98.1f;
   
    printf("%d\n",num);
    printf("%c\n",byte_c);
    printf("%d\n",num_f);
    
	return 0;
}
```

* **注**：在给float类型变量赋值时，数值后面应加上‘f/F’，如：35.7f、39.6F

* 占位符：在printf()函数可以输出各种类型的变量，在""中输入格式字符%d或%c、%f，这样的字符为占位符，用于给未确定变量占位

  

* %d：为十进制格式数据预占位

* %c：为字符格式数据预占位

* %f：为浮点型数据预占位

* %p：以内存地址形式预占位

  

* 计算机存储单位：bit - byte(字节) - kb - mb - gb - tb，计算机最小单位：bit，一个bit存放一个二进制。一个byte等于8个bit

* 二进制：0,1 二进制只有0或1表示

* **sizeof(datatype)**：该方法用于输出数据的类型大小，单位字节

  ```c
  #include <stdio.h>
  int main()
  {
      printf("%d\n", sizeof(char));
      printf("%d\n", sizeof(short));
      printf("%d\n", sizeof(int));
      printf("%d\n", sizeof(long));
      printf("%d\n", sizeof(long long));
      printf("%d\n", sizeof(float));
      printf("%d\n", sizeof(double));
      printf("%d\n", sizeof(long double));
      
      return 0;
  }
  ```

  

* 存在多种的类型，是为了更加丰富的表达生活中的各种值

  

#### **全局变量**与**局部变量**：

全局变量作用域大于局部变量，局部变量定义于代码块中，其作用域仅限于在这个代码块中

```c
#include <stdio.h>
int global = 2019;//全局变量
int main()
{
    int local = 2018;//局部变量
    int global = 2020;//局部变量
    printf("global = %d\n", global);
    return 0;
}
```

**优先级**：当局部变量和全局变量同名的时候，局部变量优先使用

#### 变量的**作用域**和**生命周期**

-  作用域：程序代码中所用到的名字并不总是有效/可用的而限定这个名字的可用性的代码范围就是这个名字的作用域
  *		1. 局部变量的作用域是变量所在的局部范围，也就是代码块。
  *		2. 全局变量的作用域是整个工程。
- 生命周期：变量的创建到变量的销毁之间的一个时间段
  *		1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
  *		2. 全局变量的生命周期是：整个程序的生命周期。

##### 变量使用

变量可用于数字计算或其他科学计算

```c
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &a, &b);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
```

- 输入函数：C库中用于读取键盘输入数据的函数，如：scanf(data) ...
- 输出函数：C库中向屏幕输出数据的函数，如：printf(data) ...
- 变量的内存地址：在定义变量时，程序会在内存中开辟一小块空间用于存储数据，而这一小块空间会以变量名命名，还会有一个唯一的标识 - 内存地址，用以

注：**disable:C4996**错误代码，这是关于安全性的警告，由于高版本Visual Studio弃用了标准C库中的许多函数和全局变量，导致c++无法正常识别函数，从而提示4996代码。

* 解决 C4996 问题，建议更改代码，或关闭4996错误代码提示
* 在工程前第一行引用代码#define _CRT_SECURE_NO_WARNINGS 1 或 #pragma warning(suppress : 4996) 用于关闭4996提示
* Visual Studio提供的函数只能在vs运行在gcc上无法正常运行，不具备跨平台性，强烈要求使用原C语言提供的函数

### 常量

不可以直接改变的变量，和变量的定义的形式有所差异

* 常见的常量类形：
  * 字面常量
  *				 const 修饰的常变量，但其本质还是变量
  * #define 定义的标识符常量
  * 枚举常量
* 枚举：有默认值

```c
#include<stdio.h>

#define MIX 1//用define定义的常量

int Constants();

//枚举举例
enum snum
{
	max = 0,
	sele = 1
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
	enum snum num_2 = sele;
	
	//此num因为加了const修饰，无法再次赋值
	//num = 8;

	return 0;
}
```

#### 字符串

由字符组成的字符数组，或由双引号（Double Quote）引起来的一串字符称为字符串字面值，如："hello C"、"你好！"

**注：**字符串的结束标志是一个\0 的转义字符。在计算字符串长度的时候\0 是结束标志，不算作字符串内容。且 \0 不算作字符串内容,但 \0 在数组中占一个位置

```c
#include<stdio.h>

int char_arr();

int char_arr()
{
    //两种都可以定义字符串
    char arr_0[6] = {'h','e','l','l','o'，'\0'};
    char arr_1[6] = "hello\0";
    
    //输出结果都是 hello
    printf("%s", arr_0);
    printf("%s", arr_1);
    return 0;
}
```

**strlen(arr_name)**：string length 是C语言提供用于计算字符串长度的函数。头文件 string.h 提供了对字符串操作的函数

```c
#include<stdio.h>
#include<string.h>

int char_strlen();

int char_strlen()
{
    char arr_0[] = "hello";
    char arr_1[6] = "hello";
    
    char arr_2[] = {'h','e','l','l','o'};
    char arr_3[6] = {'h','e','l','l','o'};
    
    printf("%d", strlen(arr_0));
	printf("%d", strlen(arr_1));
    
    printf("%d", strlen(arr_2));//因为定义数组时没有给定成员个数，当计算长度时数组会在
	printf("%d", strlen(arr_3));
}
```

### 转义字符

在字符前加上 \ 使其具有特殊的意义

```c
#include<stdio.h>

int escaped_characters();

int escaped_characters()
{
	//换行
	printf("\n");

	//表示 ' 字符
	printf("\'");

	//警告字符，蜂鸣
	printf("\a");

	//退格,向后退一格再输出
	printf("ad \b d");

	//水平制表符
	printf("a\tb");

	//转义八进制数字
	printf("\32\n");//将32作为八进制数转成十进制数再到ASCII码表找到对应的字符再转义

	//转义十六进制数字
	printf("\x12");//将12作为十六进制数转成十进制数再到ASCII码表找到对应的字符再转义

	return 0;
}
```

