#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void strcpy_demo();

/*
* char * strcpy ( char * destination, const char * source )�����ڿ����ַ������� source ָ��� C �ַ������Ƶ� destination ָ��������У�������ֹ���ַ������ڸõ�ֹͣ����source����ָ���ַ�����Ŀ�ʼ��Ҳ���Դ��ַ�����ĳ��Ԫ�ؿ�ʼ
*															strcpy�ǽ�destination�е�ǰ�泤�ȵ��ַ����滻��source�ģ�����source���ȵ������ַ����ᱣ�����������ڶ�ȡ�л�������\0�����Ժ�����ַ����ᱻ��ȡ
*															��Ҫע���ڴ������destination�ĳ��ȱ�����sourceһ��
*	����
*		char str1[] = "helloword!!";
*		char str2[40] = "###############";
*		strcpy(str2,str1);
*		��ʱ��str2�����ݣ�helloword!!\0###�������str2ʱ������ȡ��\0������ַ������ٶ�ȡ��
*/

void strcpy_demo() 
{
	char str1[] = "sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("str1:%s\nstr2:%s\nstr3:%s\n", str1, str2, str3);
}

/*
* void * memset ( void * ptr, int value, size_t num )������ڴ�飬�� ptr ָ����ڴ���ǰ num ���ֽ�����Ϊָ��ֵ value������Ϊ�޷����ַ�����
*	����
*		char str[] = "almost every programmer should know memset!";
*		memset(str,"*",4);
*		��ʱ��str�����ݣ�****st every programmer should know memset!
*/
void memset_demo() 
{
	char str[] = "hello word!!";
	memset(str, "*", 5);
	printf("%s", str);
	
}