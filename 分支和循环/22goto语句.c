#include<stdio.h>

int main() {
	//goto语句
	//通常用在跳出多层循环
	printf("你好世界\n");
	goto FLAG;//跳转到标记
	printf("你好\n");
FLAG:
	printf("世界\n");
	return 0;
}