#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int EF(int* p, int len, int k) {
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (p[mid] < k) {
			left = mid + 1;
		}
		if (p[mid] > k) {
			right = mid - 1;
		}
		if (p[mid] == k) {
			return mid;
		}
	}
	return -1;

}

int main() {
	//���������������в��Ҿ���ĳ�������������±�
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	printf("��������Ҫ���ҵ�ֵ\n");
	scanf("%d", &k);
	printf("�±�Ϊ%d\n -1�����ѯʧ��", EF(p, len, k));

	return 0;
}