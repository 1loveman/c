#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void test() {
	int a = 1;
	a++;
	printf("a=%d\n", a);
}
void test1() {
	static int a1 = 1;
	a1++;
	printf("a1=%d\n", a1);
}


int main() {
	//�ؼ���--��������������
	//auto 
	auto int a = 10; //�ֲ������ֽ��Զ����ɱ��� һ��auto�Զ�ʡ�ԡ�


	//extern --�����ⲿ���� ������������ͬһ����������Դ�ļ��еı������ߺ���
	//��ʽ extern  �������� ������

	//register  --����ѱ�������ɼĴ�������
	//������ڴ����   Ӳ��  �ڴ�  ���ٻ���  �Ĵ��� ;
	register int a1;

	//struct  �ṹ��ؼ���

	//union   ������/������

	//typedef--����������
	typedef unsigned int u_int; //������Ϊu_int

	//�ؼ���static 
	//���ξֲ��������ֲ������������ڱ䳤��
	//����ȫ�ֱ���  �ı������������ʹȫ�ֱ���ֻ������Դ�ļ�ʹ�ö�������������
	int i = 0;
	while (i < 5) {
		test(); // ���Ϊ��ӡ���2����Ϊtest������aΪ�ֲ�����;
		test1();//���Ϊ��ӡ23456
 		i++;
	}
	//���κ���  �ı��˺�������������;�ⲿ�������Ա�����ڲ��������ԣ�

	return 0;
}