#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���������ʽ
/*
	����ֵ���� ������(������ �βΣ������� �β�){
		���;
		
	}

*/


int max_(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	//���������Ľϴ�ֵ;
	printf("������������\n");
	scanf("%d%d", &n1, &n2);
	int max=max_(n1, n2);
	//�����ȶ��壬����������  ����������������main֮������Ҫ����
	printf("max=%d\n", max);
	return 0;
}