//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main() {
//	//变量：用来描述可变的量。
//	// C语言规定变量要定义在当前代码块的最前方。不然会报错缺少;
//	//变量的分类  
//	// 全局变量
//	// 定义在代码块外部的变量；作用于整个工程。
//	// 局部变量
//	// 定义在代码块内部的变量；作用于相应的代码块内部。
//	// 相同的变量名，局部变量优先。全局变量与局部变量的名字尽量不要相同。
//	//变量的申请
//	//格式  数据类型 变量名 = 变量值;
//	char ch = 'a'; //向内存申请一个1字节的char类型的空间
//	short a1 = 21;//向内存申请一个2字节的short类型的空间
//	int a2 = 21; //向内存申请一个4字节的int类型的空间
//	long a3 = 21; //向内存申请一个4字节的long类型的空间
//	long long a4 = 21; //向内存申请一个8字节的long long类型的空间
//	float a5 = 3.14f;//向内存申请一个4字节的float类型的空间
//	double a6 = 3.14;//向内存申请一个8字节的double类型的空间
//
//	//计算两数之和
//	int num1,num2,sum;
//	printf("请输入两个整型数据\n");
//	//标准输入函数scanf输入两个数的值
//	scanf("%d,%d", &num1, &num2);//&为取地址符
//	sum = num1+num2;
//	printf("sum=%d", sum);
//	//变量的作用域和生命周期;
//	//全局变量的作用域是整个工程。
//	// 在同一个工程不同的.c文件中全局变量也是可用通用的，但是得加个如下的extern外部符号声明。
//	// extern 数据类型 变量名;
//	// 全局变量的生命周期为整个程序的生命周期。
//	//局部变量的作用域是变量所在的代码块儿;
//	int b;//该变量作用于main函数内
//	//局部变量的生命周期为从进入作用域开始，到出作用域结束。
//	return 0;
//}
