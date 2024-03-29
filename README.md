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


## C程序的结构：
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

------

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



------

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



------

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
	//将枚举snum中sele的值赋给num_2
	enum snum num_2 = sele;
	
	//此num因为加了const修饰，无法再次赋值
	//num_1 = 8;

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
    
    //因为定义数组时没有给定成员个数，当计算长度时数组会先计算已知的成员个数，再计算随机的成员个数，直到遇到\n停止计算
    printf("%d", strlen(arr_2));
	printf("%d", strlen(arr_3));
}
```

#### 比较字符串

字符串不可以用'=='来作比较，两个字符串用==比较的是其内存地址

**strcmp(str1,str2)**：这个库函数是用以比较两个字符串内容是否相等，如果相等返回0

------

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



#### 注释

向读者标注代码的作用，让读者更好解析代码

```c
#include<stdio.h>
int note();
int note()
{
	//两种风格都可以用，看使用场景
	//C风格
	/*块注释，缺点：不可以嵌套注释*/
	
	//C++风格
	//行注释，可以注释一行也可以注释多行
}
```

------



### 流程控制语句

当程序执行main方法的时候会从 第一行 开始往下执行，直到整个代码全部执行完成。在此过程中程序按照书写的顺序，不会跳过任何一行代码。像这样的执行流程就是常见的 顺序执行结构

```c
int add();
int add() 
{
    int a = 3 ;
    int b = 5 ; 
    int sum ;
    sum = a + b;
    printf("%d + %d = %d",a,b,sum);
	return 0;
}
```



**while循环**

循环结构：重复做一个动作，直到结果达到理想值

```c
int Process_Control();
int Process_Control()
{
	int line = 0;
	while (line <= 20000)
	{
		line++;
		printf("%d\n",line);
	}

	if (line == 20000)
	{
		printf("%d 了", line);
	}

	return 0;
}
```



------

### 函数

可以根据**程序的逻辑**和**任务的分工**把代码划分到不同的自定义函数中，main()更关心**业务逻辑和处理流程**，需要执行具体任务的时候，调用这些自定义的函数就可以了。

```c
#include<stdio.h>
int Function();
int Add(int a, int b);

int Add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int Function()
{
	int a, b,sum;
	a = 5;
	b = 6;
	sum = Add(a, b);
	printf("%d + %d = %d", a, b, sum);
	return 0;
}
```



------

#### 数组

存放数据长度固定的容器，并且其数据类型也是一致的。

* 定义：与定义变量有些许相同，在变量后加上 [] 和成员个数，等号后面是数组的成员，例：

  ```c
  int arr[6] = {1,2,3,4,5,6};
  ```

  

* 数组下标：数组存储在内存中，每次访问数组成员需要知道其下标，数组的下标从0开始，也就是第一个成员对应的下标是0，第二个是1，以此类推直到最后一个成员的下标也就是 成员个数n-1，例：

  ```c
  arr[i] = 14;//i就是下标
  arr[4];//4就是下标
  ```

  

```c
#include<stdio.h>
int Arrays();
int Arrays()
{
	int arr[6] = { 1,2,3,4,5,6 };

    //sizeof(arr) / sizeof(arr[0]) 用于计算数组的成员个数方便循环
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		printf("%d\n", arr[i]);//i为数组的下标
	}

	return 0;
}
```



------

#### 操作符

算术操作符，移位操作符，位操作符，赋值操作符，单目操作符，关系操作符，逻辑操作符，条件操作符，逗号表达式，下标引用、函数调用和结构成员

##### 移(2进制)位操作符：

```c
/*	<<     左移运算符，用于将整数左移指定位数，移位规则：左边抛弃、右边补0
	>>     右移运算符，用于将整数右移指定位数                          */
```

右移位规则分两种：

* 逻辑移位（无符号） 左边用0填充，右边丢弃

* 算术移位（有符号） 左边用原该值的符号位填充，右边丢弃

```c
/*	例：左移运算符
	int a = 1;  
	a<<1;  
	整型1占4个字节，一个字节8个bit， 32bit位，1个bit用0或1表示，00000000 代表一个字节
	00000000 00000000 00000000 00000001
	<<1 向左移1个bit，左边溢出的0去掉，右边补一个0
	00000000 00000000 00000000 00000010										*/
```

```c
#include<stdio.h>
int Operators();
int Operators()
{
	int a = 1;
	int b = a << 2;//b等于a移位后的值，a不变

	printf("a = %d, b = %d", a, b);
	return 0;
}
```



##### 位操作符

- &     按位与，两个操作数都为1，结果为1，否则为0，就是有一个是假即为假
- |      按位或，两个操作数都为0，结果为0，否则为1，或就是有一个是真即为真
- ^     按位异或，相同为0，不同为1
- ~    按位取反，每一位1变成0，0变成1

```c
/*	 例：&  按位与
		int a = 3; 
		int b = 5;
		a & b == 3 & 5
		10进制   二进制
		3   ==   0011
		5   ==   0101
		3&5 ==   0001   ==  1（10进制）  */
```



##### 赋值操作符

复合赋值符

- =  +=  -=  *=  /=
- &=  ^=  |=  
- ' >>=  <<= '

##### 单目、双目、三目操作符

单目

- ！ 逻辑反操作，把操作数的真假互换  在C语言中0代表假，非0代表真，一般以1代表真

- &  取操作数的地址

- -+  正负值

- sizeof  取操作数的类型长度

  ```c
  int a = 1;
  int arr[] = {1,2,3,4,5,6};
  //下列三个写法输出都一样
  printf("%d\n",sizeof(a));
  printf("%d\n",sizeof(int));
  printf("%d\n",sizeof a);
  //下面的写法不可行
  //printf("%d\n",sizeof int);
  
  //sizeof计算数组时是计算其大小而不是类型长度，单位也是字节，是所有元素的字节总和
  printf("%d\n",sizeof(arr));//6个元素 * 4bit
  
  ```

- ~  对一个数的二进制按位取反,把其二进制的1变成0,0变成1

  ```c
  int a = 5;
  //內存中存储的是二进制的补码
  //而在打印输出时是这个数的原码
  //原码符号位不变其他位取反，得到反码，反码加一得到补码
  //补码减一，得到反码，符号位不变其他位取反得到原码
  //00000000 00000000 00000000 00000101   5
  //11111111 11111111 11111111 11111010   ~5
  //11111111 11111111 11111111 11111001	对~5进行补码
  //10000000 00000000 00000000 00000110	再对其反码得到源码-6
  printf("%d\n", ~a);//-6
  ```

- --、++  使操作数减1，在前置在后置

  ```c
  /*	例：
  		int a, b;
  		a = 5;
  		b = a++;    在操作数参与运算后自增1，此处的b=5，a=6
  		b = ++a;    在操作数参与运算前自增1，此处的b=6，a=6 		*/
  ```

- (类型)  强制类型转换，可能会丢失精准度

  ```c
  int a = (int) 3.14;//可能会丢失精准度
  ```

  

##### 关系操作符

`<= 、 >= 、!= 、 ==`

##### 逻辑操作符

- &&  逻辑与，只有两边**同时**为真则为真，否则为假

  ```c
  int a = 5;
  int b = 6;
  int c = a && b;
  //a && b ==>  非0 && 非0 == 1
  ```

- ||     逻辑或，两边只要**有一个**为真则为真，否则为假

  ```c
  int a = 5;
  int b = 0;
  int c = a || b;
  //a || b ==> 非0 && 0  == 1
  ```

  

##### 条件操作符

`exp1 ? exp2 : exp3`

exp为表达式，如果表达式exp1的结果为**真**，则运行exp2的结果，否则，运行exp3的结果

```c
if(a>b)
    printf("%d",a);
else
    printf("%d",b);
//以下的代码等价以上面的代码
int max = a>b ? a : b;
printf("%d",max);
```



------

#### 关键字

c语言中有一些具有特殊含义的单词，这种单词叫关键字

##### typedef

用于为类型重命名，也称别名

```c
//为int类型重命名uint
typedef int uint;
//num1和num2类型是一样的
int num1 = 10;
uint num2 = 10;
```

##### extern

声明外部符号，用于声明外部变量/函数

```c
//Add.c
//add.c的全局变量
int g_val =1980;

//test.c
//使用add.c的全局变量要先声明
extern int g_val;
a = g_val + 10;

//Add.c
//add.c的函数
int add(int a， int b)
//test.c
//要调用add.c的add函数，要先声明
extern int add(int, int);
```

##### static

用于修饰变量和函数。局部变量被static修饰，改变其生命周期。全局变量/函数 被static修饰，改变其作用域/链接属性，使得这个其只能在本源文件内使用，不能在其他源文件内使用

```c
//修饰局部变量，改变其生命周期，使其在程序结束前都存在内存中
static int a = 1;

//修饰全局变量，改变其作用域，使其在同一工程的其他源文件中无法使用
static int g_val = 10;

//修饰函数，改变其链接属性，由原来的外部链接改为內部链接，使其在同一工程的其他源文件中无法使用
static int Add(int a, int b)
```

##### #define

用于定义常量和宏

```c
//定义标识符常量
#define NUM 100;
//定义宏，比较x与y大小
#define MAX(x, y) (x>y ? x : y)
int a = 10;
int b = 20;
int num = MAX(a,b);
```

##### 指针

计算机中所有程序的运行都是在内存中进行的 。为了有效使用内存，内存被分为一个个小单元，每个单元都有特殊的编号，大小是一个字节。这些特殊的编号是内存单元的地址，可以有效的访问到该内存单元

指针变量用 `*` 来修饰

```c
int a = 20;
//把a的内存地址存储到指针变量p中，&是取地址符
//指针类型可以是int也可以是char，指针p存储的a是int类型，所以p的类型是int *
int * p = &a;
//对指针p进行解引用，指到对应的內存地址，把值改为30
//此处的*是解引用符号，用于对指针变量p解引用
*p = 30;
//%p是打印内存地址格式
printf("%p\n", &a);
printf("%p\n", p);
```

**注**：指针大小在32位平台是4个字节，64位平台是8个字节。

##### 结构体

使得C语言有能力描述复杂类型，可以用于描述或构建某些个体，比如描述学生，学生包含： `名字+年龄+性别+学号`这几项信息

```c
//struct用于修饰结构体，Stu是结构体的名称
struct Stu
{
char name[20];//名字
int age; //年龄
char sex[5]; //性别
char id[15]； //学号
};

//对结构体的初始化
//打印结构体信息
struct Stu s = {"张三"， 20， "男"， "20180101"};
//.为结构成员访问操作符
printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//->操作符
struct Stu *ps = &s;
printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age ,ps->sex, ps->id);
```

------

### 分支语句

#### if语句

用于单分支选择结构

exp为表达式，表达式的结果必须是true(0)或false(1)；

1. 如果exp为true，执行语句1
2. exp为false，执行else后面的语句n，多个else if(exp)以此类推
3. 如果要执行多条语句必须使用代码块`{}`

```c
//结构1
if(exp){
    //语句1;
}
//结构2
if(exp){
    //语句1;
}else{
    //语句2;
}
//结构3
if(exp1){
    //语句1;
}else if(exp2){
    //语句2;
}else ...
```

```c
int num = 1;
if(num + i >10)
    printf("i = %d",i);
else if(num + i > 15)
    printf("i = %d",i++);
else if(num + i > 20)
    printf("i = %d",i += 2);
else
    printf("num = %d",num);
```

#### switch语句

多分支选择结构

exp为整形表达式；case为选择项;break用于结束选择，或跳出循环;default为默认选项

1. 通过exp的值来选择执行哪个case
2. 执行完case后通过break跳出switch
3. 如果所有的case都与之不匹配则执行default
4. 如果case中没有break则继续向下执行case，直到遇到break，这种现象叫case穿透
5. 注：在switch中，exp必须是整形表达式；case后面的必须是整形常量表达式

```c
switch(exp)
{
    case n:
        //语句体；
        break;
    case n+1:
        //语句体；
        break;
        ...
    default:
        //语句体；
        break;
}
```

```c
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
	{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
		break;
	}
case 4:
	m++;
	break;
default:
	break;
}
```

------

### 循环语句

#### while语句

实现循环

exp为表达式，表达式的结果必须是true(0)或false(1)；break结束循环体；continue跳出本次循环进入下一次循环
1. exp为true，执行循环语句，直到exp为false
2. exp为false，则跳过循环
3. 如果要执行多条语句必须使用代码块`{}` 
4. 使用continue要注意要把判断条件的自变量放在continue前以免出现死循环

```C
while (exp)
{
	//循环语句
}
```

```c
int num = 1;

	while (num<20)
	{
		num += 2;
		if (num == 11) {
			continue;
		}
		if (num > 21 || num == 21 )
		{
			break;
		}
		printf("%d\n", num);
	}
```

- getchar()：标准库函数，从键盘获取字符
- putchar()：标准库函数，打印字符
- EOF：文件结束标志

#### 输入缓冲区

在输入数据时，所有的数据（包括回车\n、空格和TAB键\t）都会储存在缓冲区中，输入函数是从输入缓冲区中读取数据。而getchar能读取上述三个字符，scanf在缓冲区中遇到上述三个字符会终止读取。我们通常会用getchar来读取上述三个字符，以解决缓冲区中存在上述三个字符而导致程序无法按预期的正常读取

```C
int ch;
while((ch = getchar()) != '\n' );
```



#### for语句

由三个部分组成：定义初始变量、循环条件、变化变量

1. for循环开始时，会先执行定义初始变量，而且在整个循环过程中只执行一次定义初始变量。

2. 接着判断循环条件，如果条件成立，就执行一次循环体中的语句块。

3. 语句块执行完后，接下来会变化变量

4. 重复2、3，直到条件不成立才结束for循环。

   ```c
   //for(定义初始变量;循环条件;变化变量)
   for(int i = 0; i<=10; i++)
   {
   	//循环体
   }
   ```

- 在for循环中也可以出现break和continue,在for中的continue不会跳过调整变量这个步骤
- 可以定义多个初始变量，可以有多个变化变量
- 如果判断条件是赋值语句，值为0，则为假不进入for循环；值为1（<0），则为真执行for循环

```C
for(int i = 0; i < 10; i++)
{
    i += 1;
    if(i == 5)
        continue;//当i==5跳过本次循环，进入下一循环，i++照常运行
    if(i == 11)
        break;//当i==11结束for循环
    printf("%d",i);
}
```

```c
//判断条件是赋值语句
//判断条件k=0，0为假，所以不会进入for循环，如果判断条件k≠0，1为真，执行for循环
for(int i = 0,int k = 0; k= 0; i++, k++)
{
    k++;
}
printf("hello\n");//不执行for，直接输出hello
```

```C
//for死循环
//如果判断条件被省略了，那判断条件的结果：恒为真
for(;;)
{
    printf("hello\n");
}
```

```c
//两个循环变量的for
for(int x = 0, int y = 0;x<2 && y<5;++x,y++)
{
    printf("hello\n");
}
```

------

#### do...while循环

循环先执行一次循环体再进行判断

1. 先执行一次循环体，再进入while判断
2. 判断结果为真，重复1步骤
3. 判断结果为假，终于循环

```c
int i = 0;
do 
{
	i++;
	if (5 == i)
	{
		break;
	}
	printf("i = %d\n", i);
} while (i > 0);
```

- break和continue和while中的相似

#### 判断条件

如果判断条件是赋值语句，值等于0判断条件为假，值不等于0判断条件为真

------

### goto语句

跳到某个标识符位置执行程序，

但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过程，如一次跳出多层循环，这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。

------

## 函 数

是一个大型程序中的某部分代码， 由一个或多个语句块组成。

负责完成某项任务，较于其他代码，具备相对的独立性

- 库函数
- 自定义函数

### 库函数

C语言的基础库中提供的一系似的函数，支持可移植性和提高程序的效率，不是业务性的代码，在开发中每个程序员都可能用到

常用库函数

- IO函数
- 字符串操作函数
- 字符操作函数
- 内存操作函数
- 时间/曰期函数
- 数学函数

**使用库函数，必须包含`#include` 对应的头文件。**

### 自定义函数

自定义函数和库函数一样，有函数名，返回值类型和函数参数。 但是不一样的是这些都是我们自己来设计。这给程序员一个很大的发挥空间

```c
//ret_type 返回类型
//fun_name 函数名
//para1 函数参数
//statement 语句项
ret_type fun_name(para1, * )
{
	//statement;
}

```

```c
//返回最大值
int get_max(int a,int b) 
{
	if (a>b)
		return a;
	else
		return b;
}

//交换两个变量的内容
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
} 
```

#### 实际参数

真实传给函数的参数，叫实参。实参可以是：常量、变量、表达式、函数等。无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。

#### 形式参数

形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数。形式参数当**函数调用完成之后就自动销毁**了。因此形式参数只在函数中有效。

------

### 函数调用

#### 传值调用

函数的形参和实参分别占有不同的内存块，对形参的俢改不会影响实参

#### 传址调用

传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。让函数和外部的变量建立联系

#### 如何用传值或传址调用

- 函数需要**修改**外部的变量，则**传址**
- 函数只需要**获取**变量值，则**传值**

------

### 函数嵌套和链式访问

**函数嵌套**，在编写函数B时把函数A写到函数B的函数体中

```c
void get_hello()
{
    return "hello";
}
void three()
{
    int i = 0;
    for(i = 0; i<3; i++)
    {   
        get_hello;
    }
    
}
int main(){
    three;
    return 0;
}
```

**链式访问**，在调用函数B时，把函数A的返回值作为函数B的参数

```c
int main()
{
    char arr[64] = "hello";
    //strcat()把两个字符串连接起来
    //strlen()计算字符串长度
    int ret = strlen(strcat(arr,"bit"));
    printf("%d",ret);
    return 0;
}
```

------

### 函数声明与定义

声明，告诉编译器，函数的名字、参数、返回值类型，但不一定会去定义这个函数。声明要出现在使用之前，一般声明放在头文件中

```c
//test.h头文件
//ifndef：如果没有定义xxx，则向下执行
//define：定义一个标识符，这个标识符可以是常量
#ifndef __TEST_H__
#define __TEST_H__
int Add(int a,int d);
#endif//结束if
```

定义，函数的具体实现，功能实现

```c
//test.c
#include "test.h"//包含test.h头文件
int Add(int a,int b)
{
    return a+b;
}
```

------

### 函数递归

程序调用自身的编程技巧，把大型复杂的问题层层转化为一个与原问题相似的规模较小的问题。主要思考方式：大事化小。

递归必要条件

- 存在限制条件，当满足这个限制条件的时候，递归便不再继续。 
- 每次递归调用之后越来越接近这个限制条件。

```c
#include<stdio.h>
#include "Function_Recursion.h"//头文件，声明了strLens()、test_Recursion()
int strLens(const char* str)
{
	if ('\0' == *str)
		return 0;
	else
		return 1 + strLens(str + 1);
}

void test_Recursion() 
{
	char arr[10] = {'a','b','c', 'd', 'e', 'f', 'g'};
	int lenght = strLens(arr);
	printf("%d", lenght);
}
```

#### 栈溢出

栈，是计算机内存存储数据的结构，在程序调用的时候，参数、返回值等都会进行压栈、出栈操作，栈的存储规则是**先进后出**，先进入的数据会被压入栈底，而最后的数据在栈顶。读取数据的时候会从栈的顶端开始读出数据，常见标识：栈顶、栈底

死递归或死循环可能一直开辟栈空间，导致**栈溢出**。溢出的意思就是越界，递归函数调用的太深，操作系统会给每个函数分配一个堆栈空间，当分配的空间超出最大上限，就会导致溢出，从而崩溃

为避免出现栈溢出，在设计程序时，减少递归(循环)的次数

------

## 数组

### 一维数组

一组相同类型元素的集合

```c
type_t arr_name [const_n];
//type_t 是指数组的元素类型
//arr_name 数组名
//const_n 是一个常量表达式，用来指定数组的大小 
```

#### 字符数组的空间与长度

sizeof：运算符，计算变量、数组、类型等等所占空间的大小

strlen：头文件string.h的库函数，计算字符串的长度，以标识'\0'结束，只针对字符串

```c
char arr_str[] = { 'a','b','c','d','e','f' };
char arr[] = "abcdef";
//sizeof是计算这个数组的全体元素所占空间的大小
//“abcdef”这个字符串所占空间是7个字符(还有一个隐藏的结束标识‘\0’)
//所以这个数组所占空间是：abcdef\0 -- 7个字符
printf("%d\n", sizeof(arr));
//strlen是计算这个数组的长度
//计算长度以‘\0’结束(长度不包含‘\0’标识)
//所以这个数组长度是：abcdef -- 6
printf("%d\n", strlen(arr));
//数组arr_str不是以字符串形式初始化，所以没有结束标识‘\0’
//所以这个数组所占空间是：abcdef -- 6个字符
printf("%d\n", sizeof(arr_str));//6
//因为初始化arr_str时，没有给定结束标识符‘\0’，在计算长度时会随机给出长度
printf("%d\n", strlen(arr_str));
```

------

### 二维数组

```c
type_t arr_name [const_i][const_j];
//type_t 是指数组的元素类型
//arr_name 数组名
//const_i 是一个常量表达式，用来指定数组的行数
//const_j 也是一个常量表达式，用来指定数组的列数
//在创建数组时，列数不可省略，但行数可以省略
```

```c
int arr_01[2][2] = {{1,2},{5,4}};
int arr_02[][2] = {{1,4},{4,5}}
int arr_03[][3] = {1,2,3,4};
//int arr_04[4][] 这样的定义不可行
```

------

### 数组在内存中是连续存放的

### 数组作为函数参数

当把数组作为函数参数传递时，实际传递的是数组首元素的地址。除此外还有两种情况，

1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数
组。
2. &数组名，取出的是数组的地址。&数组名，数组名表示整个数组。

### 冒泡排序

```c
//main
int arr[] = { 10,8,5,94,7,3,2,9,1,91,51 };
int length = sizeof(arr) / sizeof(arr[0]);
Arrays_Bubble_Sort(arr, length);
for (int i = 0; i < length; i++){
	if (i >= length-1)
		 printf("%d\n", arr[i]);
	else
		printf("%d, ", arr[i]);
}

//void Arrays_Bubble_Sort(int *arr, int length) 
int i = 0;
int tmp = 0;
int flag;
for (i = 0; i < length-1; i++){
	int j = 0;
	flag = 1;
	for ( j = 0; j < length - 1 - i; j++)
	{
		if (arr[j] > arr[j+1]){
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			//tmp = 0;
			flag = 0;//如果数组arr是无序数组，把0赋值给flag
		}
	}
	if (flag)
        break;//如果数组arr是有序的，即跳出for循环
}
```

## 操作符

### 算术操作符

+、-、*、/、%

- 除了% 操作符之外，其他的几个操作符可以作用于整数和浮点数。
- 对于/ 操作符如果两个操作数都为整数，执行整数除法。而只要有浮点数执行的就是浮点数除法
- 取余，% 操作符的两个操作数**必须**为整数，返回的是整除之后的余数
- 取整，/ 操作符的两个操作数为整数时，返回的是整除之后的整数，小数位不要

------

### 移位操作符

`<< 左移操作符、>> 右移操作符`，移动的是二进制位

移位规则

- 左移操作符：左边抛弃、右边补0
- 右移运算分两种
  1. 逻辑移位 左边用0填充，右边丢弃
  2. 算术移位 左边用原该值的符号位填充，右边丢弃

```c
int a = 15;
//00000000 00000000 00000000 00001111     15
int b = a >> 1;
//00000000 00000000 00000000 00000111      7

int c = -16;
//10000000 00000000 00000000 00010000     -16
//11111111 11111111 11111111 11101111     -16反码
//11111111 11111111 11111111 11110000     -16补码
//11111111 11111111 11111111 11111000     -16右移1的补码
//11111111 11111111 11111111 11110111     右移后的补码减1取反码
//10000000 00000000 00000000 00001000     -8
int d = c >> 1;
//10000000 00000000 00000000 00010000     -8
```

#### 注意

数据在內存中存储的是二进制的补码；对于移位运算符，不要移动负数位，这个是非法的；当需要对某整数（**浮点数不能进行移位操作**）进行除以2的n次幂的操作时，最好用右移n位进行替换，因为在计算机中计算除法更“费劲”,右移运算符更高效一点

------

### 位操作符

`& 按位与、| 按位或、^ 按位异或`，正数的原反补码都是一致的

```c
int a = 5;
int b = 3;
int c = a & b;
//0101 a = 5
//0011 b = 3
//0001 c = 1
//两个操作数都为1，结果为1，否则为0，有一个是假即为假

int d = a | b;
//0101 a = 5
//0011 b = 3
//0111 d = 7 
//两个操作数都为0，结果为0，否则为1，有一个是真即为真

int e = a ^ b;
//0101 a = 5
//0011 b = 3
//0110 e = 6
//相同为0，不同为1
//也叫半加运算，其运算法则相当于不带进位的二进制加法

//面试题 a与b的值相换
int a = 10;
int b = 20;
//0000 1010  a = 10
//0001 0100  b = 20
//0001 1110  a = a^b = 30
//0000 1010  a^b = b = 10
//0001 0100  a^b = a = 20
```

#### 注意

浮点数也不能进行位操作，操作数必须是整数。
