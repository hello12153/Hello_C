#define _CRT_SECURE_NO_WARNINGS 1
/*
*
*switch���:���֧ѡ��ṹ
*expΪ���α��ʽ��caseΪѡ���case����ı��������γ������ʽ��break���ڽ���ѡ�񣬻�����ѭ�����������ֵ�����е�case��ǩ��ֵ����ƥ����ִ��default��������
*1. ͨ��exp��ֵ��ѡ��ִ���ĸ�case
*2. ִ����case��ͨ��break����switch
*3. ������е�case����֮��ƥ����ִ��default
*4. ���case��û��break���������ִ��case��ֱ������break�����������case��͸
* 
* ע����switch�У�exp���������α��ʽ��case����ı��������γ������ʽ
*/
#include<stdio.h>
void Branches_Switch();
void Penetration_Case();

void Test_Switch();

void Branches_Switch()
{
	int num;
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("��һ�ˣ���");
		break;
	case 2:
		printf("�ܶ��ˣ���");
		break;
	case 3:
		printf("�����ˣ���");
		break;
	case 4:
		printf("�����ˣ���");
		break;
	case 5:
		printf("�����ˣ���");
		break;
	case 6:
		printf("�����ˣ���");
		break;
	case 7:
		printf("�����ˣ���");
		break;
	default:
		printf("�������ܰ�");
		break;
	}
}

//case��͸
void Penetration_Case() 
{
	int num;
	scanf("%d", &num);

	switch (num)
	{
	case 1:

	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("Ҫ�ϰ��ˣ���");
		break;
	case 6:
		
	case 7:
		printf("��Ϣ�ˣ���");
		break;
	default:
		printf("������");
		break;
	}
}

//��ϰ
void Test_Switch()
{
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
		{
		case 1:
			n++;
		case 2:
			m++;
			n++; 
			break;
		default:
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
}