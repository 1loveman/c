#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	char arr1[] = "hello,world!";
	char arr2[] = "############";
	int left = 0;
	int len = sizeof(arr1) / sizeof(arr1[0])-1;//�˴���һ��Ϊ��ȥ���ַ���ĩβ��\0;
	//����len=strlen��arr2��;
	int right = len - 1;
	while (left < right) {
		arr2[left] = arr1[left]; 
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣһǧ����;//ͷ�ļ�windows.h
		system("cls");//ִ��ϵͳ�����һ������  cls�����Ļ//ͷ�ļ�stdlib.h
		left++;
		right--;
	}
	return 0;
}