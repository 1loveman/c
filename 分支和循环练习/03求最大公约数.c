#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//�����Լ��
	int n1 = 0;
	int n2 = 0;
	int temp=0;
	printf("������������\n");
	scanf("%d%d", &n1, &n2);
	if (n1 < n2) {
		temp = n2;
		n2 = n1;
		n1 = temp; 
	}
	//շת�����
	while (temp = n1 % n2) {
		n1 = n2;
		n2 = temp;
	}
	printf("���Լ��Ϊ%d\n", n2);
	return 0;
}