#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main() {
	//�žų˷���
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < i + 1; j++) {
			printf("%d * %d = %-2d ", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}