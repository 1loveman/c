#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//for循环
	//格式
	/*
	for(表达式1;条件2;表达式3){
		条件2满足时执行的语句4;
	}
	//先执行表达式1， 后判断条件2，若满足执行语句4后执行表达式3，之后又判断条件二直到不满足跳出循环;
	*/

	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}
	for (int i = 0; i < 10; i++) {
		if (5 == i) {
			continue;//for循环中的continue不会像while导致死循环
		}
		printf("%d\n", i);
	}
	//建议一般不要在for循环内部改变循环变量容易错乱
	//建议采取前闭后开的写法即i=0;i<10而不是<=
	//for循环条件2省略后为死循环
	//for循环表达式均可省略；慎用；
	return 0;
}