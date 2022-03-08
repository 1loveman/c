#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//switch语句
	/*
	switch(整型表达式){
		case 整型字符型常量：语句;
		break;
		case 整型字符型常量：语句;
		break;
		default:语句;//根据需要default可有可无;
		break;
	}
	*/
	int age;
	printf("请输入年纪：\n");
	scanf("%d", &age);
	switch (age) {
	case 10:printf("小孩儿\n");
			break;
	case 20:printf("青年\n");
		break;
	case 30:printf("壮年\n");
		break;
	default:printf("老了\n");
		break;
	}
	//10-20都叫成长期而后老年期
	switch (age) {
	case 10:
	case 20:
	case 30:printf("成长期\n");
		break;
	default:printf("老年期\n");
		break;
	}
	return 0;
}