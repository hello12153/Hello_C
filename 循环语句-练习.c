#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//������ѧ�����
#include<math.h>

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

void Circulation_test05()
{
	char name[] = "chen";
	char password[] = "123";

	char name_test[] = "";
	char password_test[] = "";

	int ch;

	int i = 0;

	while (i>3)
	{
		ch = getchar();
		printf("name:");
		scanf("%s", name_test);
		ch = getchar();
		printf("password:");
		scanf("%s", password_test);

		if (strcmp)
		{

		}
	}
}

void Circulation_test06()
{
	int a = 0, b = 0, c = 0;
	int tmp = 0;
	printf("����������Ҫ�жϴ�С����:");
	scanf("%d%d%d", &a, &b, &c);
	if (a<b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b<c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("a:%d,b:%d,c:%d",a,b,c);
}

void Circulation_test07()
{
	for (size_t i = 0; i <= 100; i++)
	{
		//%ȡ������/ȡ����
		if (i % 3 == 0)
		{
			printf("%d ,", i);
		}

	}
}

//շת���������Լ��
void Circulation_test08()
{
	int a = 0;
	int b = 0;
	int r = 0;
	printf("������Ҫ��Լ������������");
	/*scanf("%d", &a);
	scanf("%d", &b);*/
	scanf("%d%d",&a, &b);
	//���a%b��Ϊ0������whileѭ��������ִ��while
	while ( r = a % b)
	{
		a = b;
		b = r;
	}
	printf("���Լ����%d",b);
}

//����
void Circulation_test09() 
{
	int cont = 0;
	for (int year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			cont++;
			printf("%d  ", year);
		}

	}
	printf("cont = %d", cont);
}

//����
void Circulation_test10()
{
	for (int i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j < sqrt(i); j++) 
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			printf("%d  ", i);
		}
	}
}

//
void Circulation_test11() 
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d ", count);
}