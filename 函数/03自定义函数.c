#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数定义格式
/*
	返回值类型 函数名(类型名 形参，类型名 形参){
		语句;
		
	}

*/


int max_(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	//找两个数的较大值;
	printf("请输入两个数\n");
	scanf("%d%d", &n1, &n2);
	int max=max_(n1, n2);
	//函数先定义，声明，调用  ，如果函数定义放在main之后则需要声明
	printf("max=%d\n", max);
	return 0;
}