#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	//一维数组的使用
	int arr[5] = { 0,1,2,3,4 };
	char arr1[] = "abcd";
	//利用下标
	//利用数组名求首地址，数组地址，数组长度，数组元素个数。
	//求首地址
	printf("%p\n",arr);//数组名代表数组的首地址，&arr代表数组整体的地址
	//求数组的地址
	printf("%p\n", &arr);
	//求数组长度
	sizeof(arr);
	printf("%d\n", sizeof(arr));
	//求数组元素的个数
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", len);


	//使用下标来对数组赋值
	//单独
	arr[0] = 1;
	arr1[0] = 'a';
	//整体
	for (int i = 0; i < len; i++) {
		printf("arr[%d] =%d\n",i, arr[i]);
	}
	for (int i = 0; i < strlen(arr1); i++) {
		printf("arr1[%d] =%c\n",i, arr1[i]);
	}
	//查看数组实际存储结构
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] =%p\n", i, &arr[i]);//由此可知数组是开辟来存储相同数据类型的一块连续的内存空间；
	}
	return 0;
}