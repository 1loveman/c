#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ݹ����
void print(unsigned int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf(" %d ", n % 10);
}


int main() {
	//�ݹ鼴������������
	//�ݹ�����ջ���
	//�ݹ����һ������������������ʱ�����ݹ�
	//ÿ�εݹ���ú�Խ��Խ�ӽ��������


	//����һ���޷�������ֵ����˳��ֱ��ӡÿһλ��
	unsigned int n=0;
	printf("������\n");
	scanf("%d", &n);
	print(n);
	return 0;
}