#define _CRT_SECURE_NO_WARNINGS 1
/*
* while������ʵ��ѭ��
* expΪ���ʽ�����ʽ�Ľ��������true(0)��false(1)��break����ѭ���壻continue��������ѭ��������һ��ѭ��
* 1. expΪtrue��ִ��ѭ����䣬ֱ��expΪfalse
* 2. expΪfalse��������ѭ��
* 3. ���Ҫִ�ж���������ʹ�ô����`{}` 
* 4. ʹ��continueҪע��Ҫ���ж��������Ա�������continueǰ���������ѭ��
* 
* getchar���Ӽ��̻�ȡ�ַ�
* putchar����ӡ�ַ�
* 
* EOF���ļ�������־
* 
* ���뻺���������뺯���Ǵ����뻺�����ж�ȡ���ݡ�����������ʱ���س����ո��TAB�����ᴢ���ڻ������С�getchar�ܶ�ȡ���������ַ���scanf�ڻ��������������������ַ�����ֹ��ȡ
*/

#include<stdio.h>

void Circulation_While();
void Test_While();
void Test02_While();

void Circulation_While()
{
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
	
}

void Test_While()
{
	int ch = 10;
	while (EOF != (ch = getchar()))
	{
		putchar(ch);
	}
}

void Test02_While()
{
	int ch;
	while ( EOF != (ch = getchar()) )
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}
}