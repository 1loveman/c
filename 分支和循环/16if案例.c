#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//�ж�һ�����Ƿ�Ϊ����
	int nums;
	printf("������һ������\n");
	scanf("%d", &nums);
	if (1 == nums % 2) {
		printf("%d��һ������\n", nums);
	}
	else {
		printf("%d����һ������\n", nums);
	}
	//���1-100֮�������
	for (int i = 1; i <= 100; i++) {
		if (1 == i % 2) {
			printf("%d��һ������\n", i);
		}
	}
	//���1-100֮�������
	for (int i = 1; i <= 100; i+=2) {
		printf("%d��һ������\n", i);
	}
	return 0;
}