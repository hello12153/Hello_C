/*
* @Author: hello_chen
* @Description: Study data type
* @Versions：1.0
*/

/*
* 数据类型：对不同的类型的变量需要不同的类型去描述，如果没有数据类型，语言的效率就会太慢
* 整型：int 、stort 、long 、long long
* 浮点型：float(单精度) 、double(双精度)
* 字符型：char
* 注：在给float类型变量赋值时，数值后面应加上‘f/F’，如：35.7f、39.6F
* 
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
* 存在多种的类型，是为了更加丰富的表达生活中的各种值
*/

#include<stdio.h>

//声明方法DataType
int DataType();


//构建方法DataType
int DataType() 
{

    char byte_c = 'a' ;
    float num_f = 98.1f;


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