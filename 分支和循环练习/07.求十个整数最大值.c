#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int MAX_(int* p, int len) {
	int* t=p;
	int temp = (*p);
	for (int i = 0; i < len; i++) {
		if (temp < (*p)) {
			temp = (*p);
		}
		p++;
	}
	p = t;
	return temp;
}
int main() {
	//求十个整数最大值
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("MAX=%d\n", MAX_(p, len));
	return 0;
}