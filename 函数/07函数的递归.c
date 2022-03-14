#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归调用
void print(unsigned int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf(" %d ", n % 10);
}


int main() {
	//递归即函数调用自身
	//递归容易栈溢出
	//递归存在一个限制条件，当满足时跳出递归
	//每次递归调用后越来越接近这个条件


	//接受一个无符号整型值按照顺序分别打印每一位；
	unsigned int n=0;
	printf("请输入\n");
	scanf("%d", &n);
	print(n);
	return 0;
}