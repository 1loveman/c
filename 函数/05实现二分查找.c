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
	//ʵ��������������Ķ��ֲ���;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int k=0;
	printf("������\n");
	scanf("%d", &k);
	if (EF(p, len, k)==-1) {
		printf("����ʧ��\n");
	}
	else {
	
		printf("���ҽ��Ϊ��%d\n", EF(p, len, k));//��������ʽ���ã���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�������ִ���ڲ�;
	}
	//������Ƕ��ʹ��  �������Ӻ�����ʹ��printf��

	return 0;
}