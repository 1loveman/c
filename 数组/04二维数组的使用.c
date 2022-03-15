#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main() {
	//二维数组的使用
	int arr[][4] = { {0} ,{0} };
	//数组名求数组的首地址，求整个数组的地址，求数组长度，求数组元素个数，求行数，求列数
	// 求首地址
	printf("首地址为%p\n", arr);
	//求整个数组的地址
	printf("整个数组的地址为%p\n", &arr);//若此时arr+1,加的是一整个数组的长度
	//求数组长度
	sizeof(arr);
	printf("数组长度为%d\n", sizeof(arr));
	//求数组元素个数
	int len = sizeof(arr) / sizeof(arr[0][0]);
	printf("数组元素个数为%d\n", len);
	//求行数
	int h = sizeof(arr) / sizeof(arr[0]);
	printf("行数为%d\n", h);
	//求列数
	int l = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("列数为%d\n", l);

	//下标访问数组
	//输出
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			printf(" %d \n", arr[i][j]);
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			printf(" 地址为%p \n", &arr[i][j]);//二维数组实际上是连续的一块内存；
		}
	}


	return 0;
}