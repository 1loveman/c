#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//��ӡ1~100֮�����ı���

	for (int i = 1; i < 101; i++) {
		if (0==i % 3) {
			printf("%d\n", i);
		}
	}
	return 0;
}