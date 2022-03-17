#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//不借助第三个变量，交换两数位置;
int main() {
	int a = 3;
	int b = 5;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}