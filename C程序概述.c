/*
* @Author: hello_chen
* @Description: Study Main Functions
* @Versions��1.0
*/

/*

#include <stdio.h>������Ԥ����ָ����߱�������stdio.h�е����ݰ����ڱ������С�

int main(void)��������C����Ļ���ģ�顣int��ʾ�������Ҫ�����������͵����ݣ�main()����������main������C�������ں��������еĳ�����ͨ���˺�����ʼִ�У�void��ʾû�в���

int num�����Ǹ�������������䡣num�����������int�涨���������ֵ�����͡����������ռ��ű���

num = 1����ֵ���ʽ����˼�ǡ���ֵ1��������num������ִ���������ʱ�����������ڼ�����ڴ��и�����Ԥ���ռ䣬��ִ�и�ֵʱ����ֵ�洢��֮ǰԤ����λ���ϡ���Ϊ�Ǳ������Կ��Ը���ͬ��ֵ��

printf()������C����ı�׼��������stdio.h�а��������ݣ������ڱ�������û�ж���ú���Ҳ����ʹ��

return 0�����Ƿ�����䣬�ǽ�����ִ�н�����ظ������ߡ�main()������������int���͵ķ���ֵ�����Ըú������һ����������return��䣬�����Ǵ����ص�ֵ

ת�����У����ڴ������ڱ�ʾ���޷�������ַ����确\n���������У�ÿ��ת�����ж��Է�б�ܡ�\����ʼ��

ע�ͣ������ö��߸����׶�������

*/



#include<stdio.h>

//��������MainFunctions
int MainFunctions();

//��������MainFunctions
int MainFunctions()
{
	int num;
	num = 1;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n ", num);

	return 0;
}