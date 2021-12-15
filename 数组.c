#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions：1.0
*/

/*
* 数组：存放数据长度固定的容器，并且其数据类型也是一致的。
* 定义：与定义变量有些许相同，在变量后加上 [] 和成员个数，等号后面是数组的成员，例
*	int arr[6] = {1,2,3,4,5,6};
* 数组下标：数组存储在内存中，每次访问数组成员需要知道其下标，数组的下标从0开始，也就是第一个成员对应的下标是0，第二个是1，以此类推直到最后一个成员的下标也就是 成员个数n-1
*	例：arr[i]、arr[4]...，i和4也就是下标
* 
*/

#include<stdio.h>

int Arrays();

int Arrays()
{
	int arr[6] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);//i为数组的下标
	}

	return 0;
}