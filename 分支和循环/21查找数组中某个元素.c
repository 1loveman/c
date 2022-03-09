#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int EF_find(int* arr, int len,int k){
	int left = 0;
	int right =len -1;
	for (;left<=right;) {
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if(arr[mid]<k) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	//���ַ�
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k=0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("������kֵ\n");
	scanf("%d", &k);
	if (EF_find(arr, len,k)!=-1) {
		printf("���ҳɹ����±�Ϊ%d\n", EF_find(arr,len, k));
	}
	else {
		printf("ʧ��");
	}
	return 0;
}
