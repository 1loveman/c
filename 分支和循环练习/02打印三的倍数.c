#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//打印1~100之间三的倍数

	for (int i = 1; i < 101; i++) {
		if (0==i % 3) {
			printf("%d\n", i);
		}
	}
	return 0;
}