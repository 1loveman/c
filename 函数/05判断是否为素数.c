#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int test(int val) {
	int i = 0;
	if (val == 1) {
		return 0;
	}
	for ( i = 2; i <= sqrt(val); i++) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;

}
int main() {
	//函数判断是否素数
	int val=0;
	printf("请输入值\n");
	scanf("%d", &val);
	if (test(val)) {
		printf("%d是素数\n", val);
	}
	else {
		printf("%d不是素数\n", val);
	}



	return 0;
}