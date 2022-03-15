#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	//一维数组的创建与初始化
	//格式 数据类型 数组名[数组长度]   []中必须为常数;
	

	//创建数组
	int arr[5];
	char arr2[5];

	//数组的初始化
	//创建的同时初始化
	int arr3[5] = { 0,1,2,3,4 };
	int arr4[5] = {0};//剩下的全部都补零
	int arr5[] = { 0,1,2,3,4 };//不写数组长度，编译器自动计算
	char arr_1[5] = { 'a','b',97};//剩下的自动补0;字符为\n   '97'写法不对
	char arr_3[] = { 'a','b','c','d','e' };
	char arr_2[] = "abcd";//字符串 后面自动添加一个\0
	printf("%d\n", sizeof(arr_2));
	printf("%d\n", strlen(arr_2));//strlen只计算字符串开始到\0的长度 ，\0不计入;
	//创建后初始化利用循环
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		scanf("%c", &arr2[i]);
	}
	
	return 0;
}#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main() {
	//一维数组的创建与初始化
	//格式 数据类型 数组名[数组长度]   []中必须为常数;
	

	//创建数组
	int arr[5];
	char arr2[5];

	//数组的初始化
	//创建的同时初始化
	int arr3[5] = { 0,1,2,3,4 };
	int arr4[5] = {0};//剩下的全部都补零
	int arr5[] = { 0,1,2,3,4 };//不写数组长度，编译器自动计算
	char arr_1[5] = { 'a','b',97};//剩下的自动补0;字符为\n   '97'写法不对
	char arr_3[] = { 'a','b','c','d','e' };
	char arr_2[] = "abcd";//字符串 后面自动添加一个\0
	printf("%d\n", sizeof(arr_2));
	printf("%d\n", strlen(arr_2));//strlen只计算字符串开始到\0的长度 ，\0不计入;
	//创建后初始化利用循环
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		scanf("%c", &arr2[i]);
	}
	
	return 0;
}