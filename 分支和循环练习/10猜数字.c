#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>

int main() {
	srand((unsigned)time(NULL));
	int ret = rand() % 100 + 1;
	int val=0;
	do {
		printf("请输入猜测的数字\n");
		scanf("%d", &val);
		if (val > ret) {
			printf("猜大了\n");
		}
		else if(val<ret) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
		}
	} while (val != ret);
	return 0;
}