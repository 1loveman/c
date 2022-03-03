#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define定义常量和宏;

//定义标识符常量
//格式#define 常量名 常量值
#define weeks 7 //week就是7

//宏定义
#define max a>b?a:b;  //max 代替后面
int main() {
	int a = 1,b=2,c;
	c = max;
	printf("c=%d\n", c);
	return 0;
}