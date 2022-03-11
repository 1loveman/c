#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//数1~100中9出现了多少次；
	int j = 0;
	for (int i = 1; i < 101; i++) {
		if (i % 10 == 9) {
			j++;
		}
		if (i / 10 == 9) {
			j++;
		}
	}
	printf("出现了%d次\n", j);
	return 0;
}