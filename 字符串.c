#define _CRT_SECURE_NO_WARNINGS 1

/*
* @Author: hello_chen
* @Description: 
* @Versions��1.0
*/

/*
* �ַ��������ַ���ɵ��ַ����飬����˫���ţ�Double Quote����������һ���ַ���Ϊ�ַ�������ֵ���磺"hello C"��"��ã�"
* 
* %s�����Ը��ַ������ַ�����ռλ
* 
* strlen(arr_name)��string length ��C�����ṩ���ڼ����ַ������ȵĺ���
* 
* ע���ַ����Ľ�����־��һ�� \0 ��ת���ַ� , �����ڼ����ַ������ȵ�ʱ���ȡ�� \0 �������ȡ���� \0 �������ַ�������,�� \0 ��������ռһ��λ��
*/
#include<stdio.h>
#include<string.h>

int Char_arr();

int Char_arr()
{

	char arr_0[] = "hello";
	char arr_1[6] = "hello";

	char arr_2[] = { 'h','e','l','l','o' };
	char arr_3[6] = { 'h','e','l','l','o' };

	for (int i = 0; i < strlen(arr_0); i++)
	{
		printf("%c", arr_0[i]);
	}
	printf("\n");

	printf("%s", arr_1);

	printf("\n");

	printf("%d\n", strlen(arr_0));
	printf("%d\n", strlen(arr_1));

	//��Ϊ��������ʱû�и�����Ա�����������㳤��ʱ������ȼ�����֪�ĳ�Ա�������ټ�������ĳ�Ա������ֱ������\nֹͣ����
	printf("%d\n", strlen(arr_2));
	printf("%d\n", strlen(arr_3));
	
	return 0;
}