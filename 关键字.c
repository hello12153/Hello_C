#define _CRT_SECURE_NO_WARNINGS 1
/*
* @Author: hello_chen
* @Description:
* @Versions��1.0
*/

/*
* c��������һЩ�������⺬��ĵ��ʣ����ֵ��ʽйؼ���
* 
* typedef������Ϊ������������Ҳ�Ʊ���
*	����Ϊint����������uint
*		typedef int uint;
*		//num1��num2������һ����
*		int num1 = 10;
*		uint num2 = 10;
* 
* extern�������ⲿ���ţ����������ⲿ����/����
*	��1
*		Add.c
*			add.c��ȫ�ֱ���
*			int g_val =1980;
*		test.c
*			ʹ��add.c��ȫ�ֱ���Ҫ������
*			extern int g_val;
*			a = g_val + 10;
*	��2
*		Add.c
*			add.c�ĺ���
*			int add(int a�� int b)
*		test.c
*			Ҫ����add.c��add������Ҫ������
*			extern int add(int, int);
* 
* static���������α����ͺ������ֲ�������static���Σ��ı����������ڡ�ȫ�ֱ���/���� ��static���Σ��ı���������/�������ԣ�ʹ�������ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ��
*	����
*		static int a = 1;
*	
* #define�����ڶ��峣���ͺ�
*	��
*		�����ʶ������
*		#define NUM 100;
*		����꣬�Ƚ�x��y��С
*		#define MAX(x, y) (x>y ? x : y)
*		
*		int a = 10;
*		int b = 20;
*		int num = MAX(a,b);
*
* ָ�룺����* �˴���*�Ǵ���ָ�����ͣ�ָ�����ʹ洢�����ڴ��ַ��*ָ����� �˴���*�ǽ����ò������������ҵ�ָ���ŵĵ�ַ���������޸�����ȴ��ַ�д洢������
*		ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڡ�
*	��
*		int a = 20;
*		��a���ڴ��ַ�洢��ָ�����p��
*		int* p = &a;
*		��ָ��p���н����ã�ָ����Ӧ�ĵ�ַ����ֵ��Ϊ30
*		*p = 30;
* 
* 
* struct���ṹ�壬���������������ͣ�������һ�����ж��岻ͬ���͵�����
*	��
*		//�����ṹ��
*		struct Stu
*		{
*			char name[20];//����
*			int age; //����
*			char sex[5]; //�Ա�
*			char id[15]�� //ѧ��
*		};
*		����ṹ��
*		struct Stu student = {"����", 20, "��", "20180101"};
*		.Ϊ�ṹ��Ա���ʲ�����
*		printf("name = %s age = %d sex = %s id = %s\n", student.name, student.age, student.sex, student.id)
*		->������
*		struct Stu *ps = &student
*		printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id)
* 
* strtyp���ַ�����������string.h�Ŀ⺯�������ڸ��Ľṹ�����ַ����������
*	����
*		��һ�������Ǳ��޸ĵı������ڶ���������Ҫ�滻������
*		strtyp(student.name, "C++ţB����");
*/

#include<stdio.h>
#include<string.h>


void test();
int Keyword();

typedef unsigned int u_int;

//stat_num�����ڱ���������Դ�ļ����޷�ʹ�ã�static���ε�ȫ�ֱ����ı�����������
static int stat_num = 10;

//�����ṹ��
struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[15];
};

void test()
{
	//����static���ε�a��������ֱ���ó��������������������Ȼ�������ã���a�������ڴ��У����洢�����һ�θ���ֵ
	static int a = 1;
	a++;
	printf("%d", a);
}

int Keyword()
{
	//����ṹ��
	struct Stu student = { "����", 20, "��", "20180101" };

	//typedef
	//num1��num2������һ����
	unsigned int num1 = 10;
	u_int num2 = 10;

	//static
	/*int i = 0;
	while (i<5)
	{
		test();
		i++;
	}*/


	//ָ��
	int a = 10;
	//int * �е� * ָ��p��ָ�����ͣ���Ϊa��������int��ָ��p�洢����a�ĵ�ַ������p��������int *
	int * p = &a;

	//�˴���*�ǽ����ò�����
	//*p���ҵ�ָ��p��ŵĵ�ַ��*p��ͬ��a��*p=20 == a=20 
	* p = 20;

	//%p�Ǵ�ӡ�ڴ��ַ��ʽ
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", sizeof(p));

	//struct
	//.������
	printf("name = %s age = %d sex = %s id = %s\n", student.name, student.age, student.sex, student.id);
	// ->������
	struct Stu * ps = &student;
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
	

	return 0;
}

