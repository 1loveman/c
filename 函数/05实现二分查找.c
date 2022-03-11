#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int EF(int* p, int len,int k) {
	int left = 0;
	int right = len - 1;
	int mid = (left + right) / 2;;
	while (left <= right) {
		mid = (left + right) / 2;
		if (p[mid] > k) {
			right = mid - 1;
		}
		else if(p[mid] < k) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	//实现整型有序数组的二分查找;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int k=0;
	printf("请输入\n");
	scanf("%d", &k);
	if (EF(p, len, k)==-1) {
		printf("查找失败\n");
	}
	else {
	
		printf("查找结果为：%d\n", EF(p, len, k));//函数的链式调用，将一个函数的返回值作为另一个函数的参数；先执行内层;
	}
	//函数的嵌套使用  例如在子函数中使用printf；

	return 0;
}