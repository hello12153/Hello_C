/*
* @Author: hello_chen
* @Description: Study data type
* @Versions��1.0
*/

/*
* �������ͣ��Բ�ͬ�����͵ı�����Ҫ��ͬ������ȥ���������û���������ͣ����Ե�Ч�ʾͻ�̫��
* ���ͣ�int ��stort ��long ��long long
* �����ͣ�float(������) ��double(˫����)
* �ַ��ͣ�char
* ע���ڸ�float���ͱ�����ֵʱ����ֵ����Ӧ���ϡ�f/F�����磺35.7f��39.6F
* 
* ռλ������printf()������������������͵ı�������""�������ʽ�ַ�%d��%c��%f���������ַ�Ϊռλ�������ڸ�δȷ������ռλ
* 
* %d��Ϊʮ���Ƹ�ʽ����Ԥռλ
* %c��Ϊ�ַ���ʽ����Ԥռλ
* %f��Ϊ����������Ԥռλ
* %p�����ڴ��ַ��ʽԤռλ
* 
* ������洢��λ��bit - byte(�ֽ�) - kb - mb - gb - tb���������С��λ��bit��һ��bit���һ�������ơ�һ��byte����8��bit
* �����ƣ�0,1 ������ֻ��0��1��ʾ
* 
* sizeof(datatype)���÷�������������ݵ����ʹ�С����λ�ֽ�
* 
* ���ڶ��ֵ����ͣ���Ϊ�˸��ӷḻ�ı�������еĸ���ֵ
*/

#include<stdio.h>

//��������DataType
int DataType();


//��������DataType
int DataType() 
{

    char byte_c = 'a' ;
    float num_f = 98.1f;


    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));

	return 0;
}