#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>




int function_test01(int num) 
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
	
}

int function_tets02(int year)
{
	if (((0 == (year%4)) && (0 != (year%100))) || (0 == (year % 400)))
		return 1;
	else
		return 0;
}

//当形参接收的是一个数组变量时，实际接收的是数组第一个元素的地址，而函数无法从一个地址中知道数组的长度
int function_test03(int* arr[],int arr_size,int num)
{
	int left = 0;
	int right = arr_size - 1;
	int mid = 0;
	
	while(right >= left) {
		mid = (left + right) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			return mid;	
		}
	}
	return -1;
}