#define _CRT_SECURE_NO_WARNINGS 1

/*
* @Author: hello_chen
* @Description: 
* @Versions��1.0
*/

/**
* ������������ֱ�Ӹı�ı������ͱ����Ķ������ʽ��������
* 
* �����ĳ������Σ����泣��
*				 const ���εĳ����������䱾�ʻ��Ǳ���
*				 #define ����ı�ʶ������
* 				 ö�ٳ���
* ö�٣���Ĭ��ֵ
* 
*/
#include<stdio.h>

//��define����ĳ���
#define MIX 1

int Constants();

//ö�پ���
enum snum
{
	max = 0,
	sele = 1,
	blue = 'a'
};

int Constants()
{
	//�������
	//300
	//3.14

	//�ڱ��������ǰ���������const���Զ��峣���������䱾�ʻ��Ǳ���
	int num_0 = 1;
	const int num_1 = 4;
	//ʹ��ö��
	enum snum num_2 = blue;
	

	//��num��Ϊ����const���Σ��޷��ٴθ�ֵ
	//num = 8;

	//��������
	int arr_0[10] = { 0 };
	//��Ϊ��������ʱ�������Ա���������ǳ���ֵ������const�ĳ�������Ȼ�ǳ��������䱾�ʻ��Ǳ���
	//int arr_1[num_0] = { 0 };
	//int arr_2[num_1] = { 0 };
	// #define����ı�ʶ����������
	int arr_2[MIX] = { 0 };
	//ö�ٳ���������
	//int arr_3[num_2] = { 0 };

	printf("%d", num_2);

	return 0;
}