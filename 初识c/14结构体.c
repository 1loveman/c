#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//结构体声明后有逗号
struct Book {
	char s[20];
	int price;
};

int main() {
	//结构体
	//用户自己定义的一种结构
	
	//创建结构体;
	struct Book b1 = {"C语言汇编",50};
	//三种使用结构体内部变量的方法
	//结构体名.结构体内部变量名
	printf("书名：%s\n", b1.s);
	printf("价格为：%d\n", b1.price);
	struct Book* p = &b1;
	//(*指针).结构体内部变量名
	printf("书名：%s\n", (*p).s);
	printf("价格为：%d\n", (*p).price);
	//指针->结构体内部变量名
	printf("书名：%s\n", p->s);
	printf("价格为：%d\n", p->price);
	strcpy(b1.s, "c语言");//s是一个数组不能用p->s赋值
	//strcpy拷贝字符串
	p->price = 90;
	printf("书名：%s\n", p->s);
	printf("价格为：%d\n", p->price);
	return 0;
}