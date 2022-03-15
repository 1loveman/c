#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void bubble_sort(int arr[]) {//此处有错误，此处传入的arr是数组首地址所以子函数arr[]=外部arr[0]
	int temp=0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++) {
		for (int j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	//数组作为函数参数
	//例子冒泡排序
	int arr[] = { 9,8,7,6,5,4,1,2,3,0 };
	bubble_sort(arr);
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf(" %d ", arr[i]);
	}
	
	return 0;
}