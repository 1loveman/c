#include<stdio.h>

void test() {
	
}
void test2() {
	test();
}

int main() {
	//Debug--调试版本能够包含调试信息，不进行任何优化，方便程序员调试
	//Release--发布版本--进行了各种优化，使程序在代码大小和运行速度都是最优的，方便用户使用。

	//F5启动调试--配合F9断点使用
	//先打断点 后F5 直接执行到断点
	//F10一步一步依次执行不进入子函数
	//F11进入子函数
	//ctrl+F5程序不调试直接执行
	//监视窗口，常看指定变量的变化
	//内存窗口，可观察对应内存内部信息
	int i;
	test();
	test2();

	for (i = 0; i < 100; i++) {
		printf("%d ", i);
	}

	for (i = 0; i < 100; i++) {
		printf("%d ", i);
	}
	return 0;
}