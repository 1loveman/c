#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//while循环语句
	//while(条件){条件为真执行的语句}
	//break;直接结束循环
	int i = 0;
	while (i < 10) {
		if (5 == i) {
			break;//break;直接结束循环
		}
		printf("%d\n", i);
		i++;
	}
	i = 0;
	while (i < 10) {
		if (5 == i) {
			continue;//跳过本次循环，与i++位置关系，容易导致死循环，用时需要将i++写在continue之前
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}