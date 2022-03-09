#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	char arr1[] = "hello,world!";
	char arr2[] = "############";
	int left = 0;
	int len = sizeof(arr1) / sizeof(arr1[0])-1;//此处减一是为了去掉字符串末尾的\0;
	//可用len=strlen（arr2）;
	int right = len - 1;
	while (left < right) {
		arr2[left] = arr1[left]; 
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一千毫秒;//头文件windows.h
		system("cls");//执行系统命令的一个函数  cls清空屏幕//头文件stdlib.h
		left++;
		right--;
	}
	return 0;
}