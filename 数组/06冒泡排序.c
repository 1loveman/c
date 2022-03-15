#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ð������
void bubble_sort(int* arr,int sz) {
	int temp=0;
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

//����ð��
void bubble_sort_c(int* arr, int sz) {
	int temp = 0;
	for (int i = 0; i < sz - 1; i++) {
		int flag = 1;//forѭ���б�������������ֻ��һ��ѭ��
		for (int j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (1 == flag) {
			break;
		}
	}
}


int main() {
	//ð������
	//int arr[] = { 9,8,7,6,5,4,1,2,3,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,9,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort_c(arr,sz);
	for (int i = 0; i < sz; i++) {
		printf(" %d ", arr[i]);
	}

	return 0;
}