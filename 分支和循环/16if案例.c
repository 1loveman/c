#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//判断一个数是否为奇数
	int nums;
	printf("请输入一个数：\n");
	scanf("%d", &nums);
	if (1 == nums % 2) {
		printf("%d是一个奇数\n", nums);
	}
	else {
		printf("%d不是一个奇数\n", nums);
	}
	//输出1-100之间的奇数
	for (int i = 1; i <= 100; i++) {
		if (1 == i % 2) {
			printf("%d是一个奇数\n", i);
		}
	}
	//输出1-100之间的奇数
	for (int i = 1; i <= 100; i+=2) {
		printf("%d是一个奇数\n", i);
	}
	return 0;
}