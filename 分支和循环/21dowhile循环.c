#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//dowhlie循环
	//格式
	/*
	do{
	语句1
	
	}while(条件1);
	//先执行一遍语句1然后判断条件1如果条件不满足则跳出循环;
	*/
	
	//打印0~9
	int i = 0;
	do {
		printf("%d\n", i);
		i++;
	} while (i < 10);
	return 0;
}