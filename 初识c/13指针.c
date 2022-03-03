#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算机多少位就是有多少根地址线  如32位 那么可以产生2的32次方种编号。
//最小的内存空间是一个字节即为八个二进制位


int main() {
	//指针用以存放地址
	//格式 数据类型* 指针名 = &变量;
	int a = 10;//四个字节
	printf("地址位=%p\n", &a);//&取地址符
	//用来存放地址的变量称为指针变量
	int* p = &a;  //将a的地址放在p里面
	printf("地址位=%p\n", p);//&取地址符
	//解引用操作符*   找到p所对应的空间
	*p = 100;
	printf("a=%d\n", a);


	//指针变量的大小
	//在32位系统指针占四个字节，64位占8个字节
	printf("char指针大小=%d\n", sizeof(char*));
	printf("int指针大小=%d\n", sizeof(int*));
	printf("float指针大小=%d\n", sizeof(float*));
	//打印为4个字节 因为环境为x86
	return 0;
}