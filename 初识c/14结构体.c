#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ṹ���������ж���
struct Book {
	char s[20];
	int price;
};

int main() {
	//�ṹ��
	//�û��Լ������һ�ֽṹ
	
	//�����ṹ��;
	struct Book b1 = {"C���Ի��",50};
	//����ʹ�ýṹ���ڲ������ķ���
	//�ṹ����.�ṹ���ڲ�������
	printf("������%s\n", b1.s);
	printf("�۸�Ϊ��%d\n", b1.price);
	struct Book* p = &b1;
	//(*ָ��).�ṹ���ڲ�������
	printf("������%s\n", (*p).s);
	printf("�۸�Ϊ��%d\n", (*p).price);
	//ָ��->�ṹ���ڲ�������
	printf("������%s\n", p->s);
	printf("�۸�Ϊ��%d\n", p->price);
	strcpy(b1.s, "c����");//s��һ�����鲻����p->s��ֵ
	//strcpy�����ַ���
	p->price = 90;
	printf("������%s\n", p->s);
	printf("�۸�Ϊ��%d\n", p->price);
	return 0;
}