#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//���������Ӵ�С���

	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int temp;
	printf("������������\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 < n2) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	if (n1 < n3) {
		temp = n3;
		n3 = n1;
		n1 = temp;
	}
	if (n2 < n3) {
		temp = n3;
		n3 = n2;
		n2 = temp;
	}
	printf("�Ӵ�СΪ��%d%d%d\n", n1, n2, n3);

	return 0;
}