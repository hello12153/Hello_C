#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

void Circulation_test01();
void Circulation_test02();
void Circulation_test03();

//n�Ľ׳�
void Circulation_test01()
{
	int num = 1;
	int k = 1;
	scanf("%d", &k);
	for (int j = 1; j < k; j++)
	{
		num *= j;
		printf("num = %d\n",num);

	}
}

//n+n�Ľ׳�
void Circulation_test02()
{
	int num = 1;
	int sum = 0;
	for (int i = 1; i < 11; i++)
	{
		num *= i;
		sum += num;
		printf("sum = %d\n", sum);
	}
	
}

//�������������ҳ�n
void Circulation_test03()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;

	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("arr[%d]\n", mid);
			break;
			
		}
	}
	if (left > right)
	{
		printf("No!!");
	}
}

//��ʾ����ַ��������ƶ������м���
void Circulation_test04() 
{
	char arr_01[] = "welcome to bit...";
	char arr_02[] = "#################";

	int left = 0;
	int right = strlen(arr_02) - 1;

	printf("%s\n", arr_02);

	while (left <= right)
	{
		//���Ը�����̨����
		system("cls");
		arr_02[left] = arr_01[left];
		arr_02[right] = arr_01[right];

		printf("%s\n", arr_02);
		//��Ϣ1000����
		Sleep(1000);

		left++,right--;

	}
}