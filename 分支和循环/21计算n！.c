#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int JC(int n) {
	int temp=1;
	for (int i = 1; i < n + 1; i++) {
		temp = temp * i;
	}
	return temp;
}
int main() {
	int n;
	printf("ÇëÊäÈën\n");
	scanf("%d", &n);
	printf("n!=%d\n", JC(n));
	return 0;
}