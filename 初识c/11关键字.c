#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void test() {
	int a = 1;
	a++;
	printf("a=%d\n", a);
}
void test1() {
	static int a1 = 1;
	a1++;
	printf("a1=%d\n", a1);
}


int main() {
	//关键字--不可用作变量名
	//auto 
	auto int a = 10; //局部变量又叫自动生成变量 一般auto自动省略。


	//extern --引入外部符号 可用用来引入同一个工程其他源文件中的变量或者函数
	//格式 extern  数据类型 变量名

	//register  --建议把变量定义成寄存器变量
	//计算机内存组成   硬盘  内存  高速缓存  寄存器 ;
	register int a1;

	//struct  结构体关键字

	//union   联合体/共用体

	//typedef--变量重命名
	typedef unsigned int u_int; //重命名为u_int

	//关键字static 
	//修饰局部变量，局部变量生命周期变长。
	//修饰全局变量  改变变量的作用域，使全局变量只能在其源文件使用而不是整个工程
	int i = 0;
	while (i < 5) {
		test(); // 结果为打印五个2，因为test（）中a为局部变量;
		test1();//结果为打印23456
 		i++;
	}
	//修饰函数  改变了函数的链接属性;外部链接属性变成了内部链接属性；

	return 0;
}