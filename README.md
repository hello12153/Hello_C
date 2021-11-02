
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
	int a;
	a = 20;

	printf("%d \n",a);

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

* 占位符：在printf()函数可以输出各种类型的变量，在""中输入格式字符%d或%c、%f，这样的字符为占位符，用于给未确定变量占位
* 
* %d：为十进制格式数据预占位
* %c：为字符格式数据预占位
* %f：为浮点型数据预占位
* %p：以内存地址形式预占位
* 
* 计算机存储单位：bit - byte(字节) - kb - mb - gb - tb，计算机最小单位：bit，一个bit存放一个二进制。一个byte等于8个bit
* 二进制：0,1 二进制只有0或1表示
* 
* sizeof(datatype)：该方法用于输出数据的类型大小，单位字节
* 
* 注意：存在多种的类型，是为了更加丰富的表达生活中的各种值
