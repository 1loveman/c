#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//求最大公约数
	int n1 = 0;
	int n2 = 0;
	int temp=0;
	printf("请输入两个数\n");
	scanf("%d%d", &n1, &n2);
	if (n1 < n2) {
		temp = n2;
		n2 = n1;
		n1 = temp; 
	}
	//辗转相除法
	while (temp = n1 % n2) {
		n1 = n2;
		n2 = temp;
	}
	printf("最大公约数为%d\n", n2);
	return 0;
}