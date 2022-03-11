#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<string.h>


int main() {
	//函数分为库函数和用户函数
	//库函数是编译器提供的能够直接使用的函数库
	/*
	常见的库函数
	io函数
	字符串操作函数
	字符操作函数
	内存操作函数
	时间日期操作函数
	数学函数
	其他
	*/

	//例如strcpy
	//char* strcpy(字符串1，字符串2);将字符串2内容拷贝到字符串1
	char s1[] = "你好";
	char s2[] = "###################";
	strcpy(s2, s1);//需要加入头文件string.h  s2必须比s1长;
	printf("s1=%s\ns2=%s\n", s2, s1);//拷贝连同\n拷贝,过后两字符串长度完全一样，

	//memset 内存设置
	//void * memset(指针,写入值,写入位数);将指针指向的内存块的前n个字节设置成写入值(int);
	memset(s2, '*', 5);
	printf("s1=%s\ns2=%s\n", s2, s1);//拷贝连同\n拷贝,过后两字符串长度完全一样，

	return 0;
}